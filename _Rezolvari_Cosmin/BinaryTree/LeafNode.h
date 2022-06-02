#pragma once
#include "Node.h"
class LeafNode :
    public Node
{
public:
    LeafNode(int nr);
    Node* getNode(int index) override ;
     int getNodeCount() override;
};

