#ifndef MATCHPARSER_H
#define MATCHPARSER_H
#include <result.h>
#include <string>
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
        Result a=new Result(acc, current.rest);
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
        QChar help;
        // ищем название функции или переменной
        // имя обязательно должна начинаться с буквы
        while (i < s.length() && (help.isLetter(s[i]) || (help.isNumber(s[i]) && i > 0 ) )) {
            f += s[i];
            i++;
        }
        if (!f.isEmpty()) { // если что-нибудь нашли
            if ( s.length() > i && s[i] == '(') { // и следующий символ скобка значит - это функция
                Result r = Bracket(s.mid(f.length(),f.length()));
                return processFunction(f, r);
            } else { // иначе - это переменная
                return new Result(getVariable(f), s.mid(f.length(),f.length()));
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
            char sign = current.rest[0];
            if ((sign != '*' && sign != '/')) return current;

            String next = current.rest.mid(1, (f.length(),f.length()));
            Result right = Bracket(next);

            if (sign == '*') {
                acc *= right.acc;
            } else {
                acc /= right.acc;
            }

            current = new Result(acc, right.rest);
        }
    }

   Result Num(QString s)
   {
        int i = 0;
        int dot_cnt = 0;
        boolean negative = false;
        // число также может начинаться с минуса
        if( s[0] == '-' ){
            negative = true;
            s = s.substring( 1 );
        }
        // разрешаем только цифры и точку
        while (i < s.length() && (Character.isDigit(s[i]) || s[i] == '.')) {
            // но также проверям, что в числе может быть только одна точка!
            if (s[i] == '.' && ++dot_cnt > 1) {
                throw new Exception("not valid number '" + s.substring(0, i + 1) + "'");
            }
            i++;
        }
        if( i == 0 ){ // что-либо похожее на число мы не нашли
            throw new Exception( "can't get valid number in '" + s + "'" );
        }

        double dPart = Double.parseDouble(s.substring(0, i));
        if( negative ) dPart = -dPart;
        String restPart = s.substring(i);

        return new Result(dPart, restPart);
    }

    // Тут определяем все нашие функции, которыми мы можем пользоватся в формулах
    Result processFunction(QString func, Result r)
    {
        if (func.equals("sin")) {
            return new Result(Math.sin(Math.toRadians(r.acc)), r.rest);
        } else if (func.equals("cos")) {
            return new Result(Math.cos(Math.toRadians(r.acc)), r.rest);
        } else if (func.equals("tan")) {
            return new Result(Math.tan(Math.toRadians(r.acc)), r.rest);
        } else if (func.equals("log")) {
            return new Result(Math.log(r.acc), r.rest);
        } else if (func.equals("sqrt")) {
            return new Result(Math.sqrt(r.acc), r.rest);
        } else if (func.equals("sqr")) {
            return new Result(Math.sqr(r.acc), r.rest);
        } else {
            System.err.println("function '" + func + "' is not defined");
        }
        return r;
    }
public:
    MatchParser()
    {
        variables = new QHash<QString, double>();
    }

    void setVariable(QString variableName, double variableValue)
    {
        variables.put(variableName, variableValue);
    }

    double getVariable(QString variableName)
    {
        if (!variables.containsKey(variableName)) {
            System.err.println( "Error: Try get unexists variable '"+variableName+"'" );
            return 0.0;
        }
        return variables.get(variableName);
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


};
#endif // MATCHPARSER_H
