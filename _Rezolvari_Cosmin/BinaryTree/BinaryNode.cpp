#include "BinaryNode.h"


BinaryNode::BinaryNode(int nr, Node* n1, Node* n2) {
	this->value = nr;
	this->st = n1;
	this->dr = n2;
}

Node* BinaryNode::getNode(int index) {
	if (0 == index)
		return this->st;
	else
		return this->dr;
}
int BinaryNode::getNodeCount() {
	return this->value;
}