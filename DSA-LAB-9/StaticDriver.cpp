#include"BT.h"
#include<iostream>
using namespace std;

int main() {
	BT tree;
	tree.maketree(1);
	tree.setleft(0, 2);
	tree.setright(0, 3);
	tree.setleft(1, 4);
	tree.setright(1, 5);
	tree.setleft(2, 6);
	tree.setright(2, 7);
	cout << "Find Parent";
	int parent = tree.findparent(2);
	cout << "\nParent of 2 = " << parent;
	cout << "\n Check Siblings\n";
	cout<<tree.sibling(1);
	cout << "\n";
	cout<<tree.sibling(2);
	cout << endl<<" Preorder: ";
	tree.preorder(0);
	cout << endl<<" Inorder: ";
	tree.inorder(0);
	cout << endl<<" Postorder: ";
	tree.postorder(0);
	cout << "\nCheck left\n";
	cout<<tree.isleft(0)<<"\n";
	cout << tree.isleft(1) << "\n";
	cout << tree.isleft(2) << "\n";
	cout << "Check right\n";
	cout << tree.isright(0) << "\n";
	cout << tree.isright(1) << "\n";
	cout << tree.isright(2) << "\n";
	cout << "\n";
	system("pause");
	return 0;
}