#pragma once
#include "Node.h"
class BinaryNode :
    public Node
{
    Node* st, * dr;
public:
    BinaryNode(int nr, Node* n1, Node* n2);
    Node* getNode(int index);
    int  getNodeCount();

};

