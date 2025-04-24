#include"BT.h"
#include<conio.h>
#include<iostream>
using namespace std;

BT::BT() {
	root = NULL;
	nodeCount = 0;
}

BT::BT(int info) {
	root = new TreeNode(info);
	nodeCount = 1;
}

BT::~BT() {
	deleteBT(root);
}

bool BT::IsEmpty() {
	return root == NULL;
}

void BT::deleteBT(NP node) {
	if (node != NULL) {
		deleteBT(node->left);
		deleteBT(node->right);
		delete node;
	}
}

BT::NP BT::getRoot() {
	return root;
}

BT::NP BT::maketree(int info) {
	NP p = new TreeNode(info);
	if (root == NULL)
		root = p;
	nodeCount++;
	return p;
}

void BT::setleft(NP node, int info) {
	if (node == NULL)
		cout << "Void Insertion";
	else if (node->left != NULL)
		cout << "Invalid Insertion";
	else {
		node->left = maketree(info);
		nodeCount++;
	}
}

void BT::setright(NP node, int info) {
	if (node == NULL)
		cout << "Void Insertion";
	else if (node->right != NULL)
		cout << "Invalid Insertion";
	else {
		node->right = maketree(info);
		nodeCount++;
	}
}

bool BT::isleft(NP node) {
	NP q = node->parent;
	if (q == NULL)
		return false;
	if (q->left == node)
		return true;
	return false;
}

bool BT::isright(NP node) {
	NP q = node->parent;
	if (q == NULL)
		return false;
	if (q->right == node)
		return true;
	return false;
}

BT::NP BT::sibling(NP node) {
	NP q = node->parent;
	if (q == NULL)
		return NULL;
	if (q->left == node)
		return q->right;
	else
		return q->left;
}

void BT::preorder(NP node) {
	if (node != NULL) {
		cout << node->info << " ";
		preorder(node->left);
		preorder(node->right);
	}
}

void BT::inorder(NP node) {
	if (node != NULL) {
		inorder(node->left);
		cout << node->info << " ";
		inorder(node->right);
	}
}

void BT::postorder(NP node) {
	if (node != NULL) {
		postorder(node->left);
		postorder(node->right);
		cout << node->info << " ";
	}
}

BT::NP BT::search(NP node,int value) {
	if (node == NULL)
		return NULL;
	if (node->info == value)
		return node;
	NP leftresult = search(node->left, value);
	if (leftresult != NULL)
		return leftresult;
	NP rightresult = search(node->right, value);
	if (node->right != NULL)
		return rightresult;
}
