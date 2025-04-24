#pragma once
// Static Array Implementation
#define NUMNODES 500
class BT {
protected:
	struct TreeNode {
		int info;
		int left, right, parent;
	};
	TreeNode BinaryTree[NUMNODES];
	int nodeCount;
public:
	BT();
	BT(int info); 
/*  BT(BT left, int info, BT right); */
	bool IsEmpty(); 
	bool isleft(int index);
	bool isright(int index);
	void maketree(int x);
	void setleft(int index,int info);
	void setright(int index,int info);
	void preorder(int index);
	void inorder(int index);
	void postorder(int index);
	int search(int value);
	int sibling(int index);
	int findparent(int value);
};