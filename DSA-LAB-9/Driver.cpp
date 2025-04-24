#include<conio.h>
#include"BT.h"
#include<iostream>
using namespace std;

int main() {
	BT tree;
	auto root=tree.maketree(1);
	tree.setleft(root, 2);
	tree.setright(root, 3);
	tree.setleft(root->left, 4);
	tree.setright(root->left, 5);
	tree.setleft(root->right, 6);
	tree.setright(root->right, 7);
	cout << "Preorder = ";
	tree.preorder(tree.getRoot());
	cout << "\nInorder = ";
	tree.preorder(tree.getRoot());
	cout << "\nPostorder = ";
	tree.preorder(tree.getRoot());
	return 0;
}