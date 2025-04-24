#pragma once
#define MAX_ITEMS 100
typedef int ItemType;
typedef char itemType;

class Stack {
private:
	int top;
	ItemType items[MAX_ITEMS];
public:
	Stack();
	int IsEmpty() const;
	ItemType Peek();
	void Reverse(itemType str[]);
	int Isfull() const;
	void Push(ItemType newitem);
	void Pop(ItemType &item);
	void Popstr(itemType& item);
};




#include<string>
using namespace std;
template<class ItemType>
class Stack {
private:
	int top;
	int maxStack;
	ItemType* items;
public:
	Stack();
	Stack(int max);
	~Stack();
	int IsEmpty();
	ItemType Peek();
	int IsFull();
	bool validity(string& exp);
	void Push(ItemType newitem);
	void Pop(ItemType& item);
	string infixtopostfix(string& exp);
	int precedence(ItemType op);
	int evaluatePostfix(string& exp);
};