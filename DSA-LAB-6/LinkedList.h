#pragma once
template<class T>
class List {
protected:
	struct node {
		T info;
		struct node* next;
	};
	typedef struct node* NP;
	NP listptr;
public:
	List();
	~List();
	T emptylist();
	void insertafter(T oldvalue, T newvalue);
	void deleteItem(T oldvalue);
	void deleteafter(T oldvalue);
	void deletelast();
    void makeStr(int len);
    void displayStr();
	void push(T newvalue);
	T pop();
};