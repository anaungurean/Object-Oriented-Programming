#include<iostream>
#include"Node.h"
#include"LeafNode.h"
#include"BinaryNode.h"
#include"BinaryTree.h"
int main() {
	Node* n1 = new LeafNode(1);
	Node* n3 = new LeafNode(3);
	Node* n2 = new BinaryNode(2, n1, n3);
	Node* n5 = new LeafNode(5);
	Node* n7 = new LeafNode(7);
	Node* n6 = new BinaryNode(6, n5, n7);
	Node* n4 = new BinaryNode(4, n2, n6);
	BinaryTree bt;
	bt.setRoot(n4);
	bt.walk(n4); // parcurgere inordine a arborelui binar
	return 0;
}