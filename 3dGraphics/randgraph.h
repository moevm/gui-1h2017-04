#ifndef RANDGRAPH_H
#define RANDGRAPH_H
#include "graph.h"
#include "matchparser.h"

class RandGraph : public Graph
{
    QString string;
public:
    RandGraph(QString String);
};

#endif // RANDGRAPH_H
