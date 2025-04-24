#include"BT.h"
#include<iostream>
using namespace std;


BT::BT() {
	 nodeCount = 0;
}

BT::BT(int info) {
	BinaryTree[0].info = info;
	BinaryTree[0].left = -1;
	BinaryTree[0].right = -1;
	BinaryTree[0].parent = -1;
	nodeCount = 1;
}

bool BT::IsEmpty() {
	if (nodeCount == 0)
		return true;
	return false;
}

void BT::maketree(int info) {
	BinaryTree[0].info = info;
	BinaryTree[0].left = -1;
	BinaryTree[0].right = -1;
	BinaryTree[0].parent = -1;
	nodeCount = 1;
}

void BT::setleft(int index,int info) {
	if (nodeCount >= NUMNODES|| index < 0 || index >= nodeCount)
		return;
	if (BinaryTree[index].left == -1) {
		int newNodeIndex = nodeCount;
		BinaryTree[newNodeIndex].info = info;
		BinaryTree[newNodeIndex].left = -1;
		BinaryTree[newNodeIndex].right = -1;
		BinaryTree[newNodeIndex].parent = index;
		BinaryTree[index].left = newNodeIndex;
		nodeCount++;
	}
}

void BT::setright(int index, int info) {
	if (nodeCount >= NUMNODES || index < 0 || index >= nodeCount)
		return;
	if (BinaryTree[index].right == -1) {
		int newNodeIndex = nodeCount;
		BinaryTree[newNodeIndex].info = info;
		BinaryTree[newNodeIndex].left = -1;
		BinaryTree[newNodeIndex].right = -1;
		BinaryTree[newNodeIndex].parent = index;
		BinaryTree[index].right = newNodeIndex;
		nodeCount++;
	}
}

bool BT::isleft(int index) {
	if (index < 0 || index >= nodeCount)
		return false;
	int parent = BinaryTree[index].parent;
	if (parent == -1)
		return false;
	if (BinaryTree[parent].left == index)
		return true;
	return false;
}

bool BT::isright(int index) {
	if (index < 0 || index >= nodeCount)
		return false;
	int parent = BinaryTree[index].parent;
	if (parent == -1)
		return false;
	if (BinaryTree[parent].right == index)
		return true;
	return false;
}

void BT::preorder(int index) {
	if (index < 0||index>=nodeCount)
		return;
	cout << BinaryTree[index].info<<" ";
	preorder(BinaryTree[index].left);
	preorder(BinaryTree[index].right);
}

void BT::inorder(int index) {
	if (index < 0 || index >= nodeCount)
		return;
	inorder(BinaryTree[index].left);
	cout << BinaryTree[index].info << " ";
	inorder(BinaryTree[index].right);
}

void BT::postorder(int index) {
	if (index < 0 || index >= nodeCount)
		return;
	postorder(BinaryTree[index].left);
	postorder(BinaryTree[index].right);
	cout << BinaryTree[index].info << " ";
}

int BT::search(int value) {
	for (int i = 0; i < nodeCount; i++) {
		if (BinaryTree[i].info == value)
			return i;
	}
	return -1;
}

int BT::sibling(int index) {
	if (index < 0 || index >= nodeCount)
		return false;
	int parent = BinaryTree[index].parent;
	if (parent == -1)
		return false;
	if (BinaryTree[parent].left == index)
		return BinaryTree[parent].right;
	if (BinaryTree[parent].right==index)
		return BinaryTree[parent].left;
}

int BT::findparent(int value) {
	for (int i = 0; i < nodeCount; i++) {
		if (BinaryTree[0].info == value) {
			cout << "\nThis is the root node and has no parent";
			return -1;
		}
		if (BinaryTree[i].info == value)
			return BinaryTree[i].parent;
	}
	return -1;
}