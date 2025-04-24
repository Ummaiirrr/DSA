#pragma once
#include<conio.h>
// Dynamic Array Implementation
class BT {
protected:
	struct TreeNode {
		int info;
		TreeNode *left, *right, *parent;
		TreeNode(){}
		TreeNode(int value):info(value),left(NULL),right(NULL),parent(NULL){}
	};
	typedef TreeNode* NP;
	NP root;
	int nodeCount;
public:
	BT();
	BT(int info);
	~BT();
	void deleteBT(NP node);
	/*  BT(BT left, int info, BT right); */
	bool IsEmpty();
	bool isleft(NP node);
	bool isright(NP node);
	NP maketree(int info);
	void setleft(NP node, int info);
	void setright(NP node, int info);
	void preorder(NP node);
	void inorder(NP node);
	void postorder(NP node);
	NP search(NP node,int value);
	NP sibling(NP node);
	NP getRoot();
};