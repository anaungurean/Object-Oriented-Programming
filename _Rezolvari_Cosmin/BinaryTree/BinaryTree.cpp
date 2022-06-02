#include "BinaryTree.h"
#include"LeafNode.h"
#include"BinaryNode.h"
#include<iostream>

void BinaryTree::setRoot(Node* root) {
	this->root = root;
}
void BinaryTree::walk(Node*n1) {
	//std::cout << "WALKKKKK\n";
	// inordine --> S R D
	//verificam daca nodul curent este o frunza (in acest caz nu mai putem merge la stanga)
	auto ptr = dynamic_cast<LeafNode*>(n1);
	if (ptr != nullptr)//am ajuns la maxim in stanga
		std::cout << n1->getNodeCount() << " ";
	else
	{//	std::cout << "Am ajunf in else" << n1->getNodeCount() << "\n";
	//this->root = this->root->getNode(0);
	this->walk(n1->getNode(0));
	std::cout << n1->getNodeCount()<<" ";
	this->walk(n1->getNode(1));
	//this->root = this->root->getNode(1);
	}
	}