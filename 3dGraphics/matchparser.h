#ifndef MATCHPARSER_H
#define MATCHPARSER_H
#include <result.h>
#include <cmath>
#include <QHash>
class MatchParser
{
private:
    QHash <QString, double> variables;
    int flag=0;
    QString putError;

    Result PlusMinus(QString s)
    {
        Result current = MulDiv(s);
        double acc = current.acc;

        while (current.rest.length() > 0) {
            if (!(current.rest[0] == '+' || current.rest[0] == '-')) break;

            QChar sign = current.rest[0];
            QString next = current.rest.mid(1, current.rest.length()-1);
            current = MulDiv(next);
            if (sign == '+') {
                acc += current.acc;
            } else {
                acc -= current.acc;
            }
        }
        Result a(acc, current.rest);
        return a;
    }

    Result Bracket(QString s)
    {
        QChar zeroChar = s[0];
        if (zeroChar == '(') {
            Result r = PlusMinus(s.mid(1, s.length()-1));
            if (!r.rest.isEmpty() && r.rest[0] == ')') {
                r.rest = r.rest.mid(1, r.rest.length()-1);
            } else {
                flag=1;
                putError ="Ошибка ввода";
            }
            return r;
        }
        return FunctionVariable(s);
    }

    Result FunctionVariable(QString s)
    {
        QString f = "";
        int i = 0;
        // ищем название функции или переменной
        // имя обязательно должна начинаться с буквы
        while (i < s.length() && (s[i].isLetter() || (s[i].isNumber() && i > 0 ) )) {
            f += s[i];
            i++;
        }
        if (!f.isEmpty()) { // если что-нибудь нашли
            if ( s.length() > i && s[i] == '(') { // и следующий символ скобка значит - это функция
                Result r = Bracket(s.mid(f.length(),f.length()));
                return processFunction(f, r);
            } else { // иначе - это переменная
                Result a(getVariable(f), s.mid(f.length()));
                return a;
            }
        }
        return Num(s);
    }

    Result MulDiv(QString s)
    {
        Result current = Bracket(s);

        double acc = current.acc;
        while (true) {
            if (current.rest.length() == 0) {
                return current;
            }
            QChar sign = current.rest[0];
            if ((sign != '*' && sign != '/')) return current;

            QString next = current.rest.mid(1);
            Result right = Bracket(next);

            if (sign == '*') {
                acc *= right.acc;
            } else {
                acc /= right.acc;
            }
            Result a(acc, right.rest);
            current = a;
        }
    }

   Result Num(QString s)
   {
        int i = 0;
        int dot_cnt = 0;
        bool negative = false;
        // число также может начинаться с минуса
        if( s[0] == '-' ){
            negative = true;
            s = s.mid(1);
        }
        // разрешаем только цифры и точку
        while (i < s.length() && (s[i].isDigit() || s[i] == '.')) {
            // но также проверям, что в числе может быть только одна точка!
            if (s[i] == '.' && ++dot_cnt > 1) {
                //throw new Exception("not valid number '" + s.mid(0, i + 1) + "'");
            }
            i++;
        }
        if( i == 0 ){ // что-либо похожее на число мы не нашли
           // throw new Exception( "can't get valid number in '" + s + "'" );
        }

        double dPart = s.mid(0, i).toDouble();
        if( negative ) dPart = -dPart;
        QString restPart = s.mid(i);
        Result a(dPart, restPart);
        return a;
    }

    // Тут определяем все нашие функции, которыми мы можем пользоватся в формулах
    Result processFunction(QString func, Result r)
    {
        double pi=3.14159;
        double b;
        if (func=="sin") {
            b=sin(r.acc*pi/180);
        } else if (func=="cos") {
            b=cos(r.acc*pi/180);
        } else if (func=="tan") {
            b=tan(r.acc*pi/180);
        } else if (func=="log") {
            b=log(r.acc);
        } else if (func=="sqrt") {
            b=sqrt(r.acc);
        } else if (func=="sqr") {
            b=pow(r.acc,2);
        } else {
            flag=1;
            putError="Ошибка ввода";
        }
        Result a(b,r.rest);
        return a;
    }
public:
    MatchParser()
    {
       // variables = QHash <QString, double>();
    }

    void setVariable(QString variableName, double variableValue)
    {
        variables.insert(variableName, variableValue);
    }

    double getVariable(QString variableName)
    {
        if (!variables.contains(variableName)) {
            flag=1;
            putError="Ошибка ввода";
            return 0.0;
        }
        return variables.value(variableName);
    }

    double Parse(QString s)
    {
        Result result = PlusMinus(s);
        if (!result.rest.isEmpty()) {
            flag=1;
            putError ="Ошибка ввода";
        }
        return result.acc;
    }
    int getFlag()
    {
        return flag;
    }
    ~MatchParser()
    {
    }

};
#endif // MATCHPARSER_H
