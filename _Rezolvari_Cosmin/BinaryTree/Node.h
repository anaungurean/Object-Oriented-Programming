#pragma once

class Node
{

protected:
	int value;
public:
	virtual Node* getNode(int index) = 0;
	virtual int getNodeCount() = 0;
};

