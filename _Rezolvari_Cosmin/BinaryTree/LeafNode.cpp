#include "LeafNode.h"
LeafNode::LeafNode(int nr){
	this->value = nr;
}

Node* LeafNode::getNode(int index) {
	return this;
}
int LeafNode::getNodeCount() {
	return this->value;
}