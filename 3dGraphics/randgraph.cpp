#include "randgraph.h"

RandGraph::RandGraph(QString String) {
    string = String;
    const int prec_x = 60, prec_y = 60;
    int i = 0, j = 0;
    int pole = 400;

    MatchParser pars;
    for (double x = -pole; floor(x * 10000 + 0.5) / 10000 < pole; x += (double)pole * 2 / (double)prec_x) {
        //pars.setVariable("x", x);
        j = 0;
        setX(i, x);
        for (double y = -pole; floor(y * 10000 + 0.5) / 10000 < pole; y += (double)pole * 2 / (double)prec_y) {
            pars.setVariable("x", x);
            pars.setVariable("y", y);
            setY(j, y);
            double a = pars.Parse(string);
            setZ(i, j, 100*pars.Parse(string));
            j++;
        }
        i++;
    }
   pars.~MatchParser();
}
