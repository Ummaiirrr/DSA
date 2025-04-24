#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include"LinkedList.h"
using namespace std;

// Defaul constructor that initializes a newly created list to empty list.
template<class T>
List<T>::List() {
	listptr = 0;
}

// Destructor traverses the nodes of a list, freeing them one by one.
template<class T>
List<T>::~List() {
	NP p, q;
	if (emptylist()) 
		exit(0);
	for (p = listptr, q = p->next; p != 0; p = q, q = p->next) {
		delete p;
	}
}

// Searches for the first occurance of oldvalue in the list and inserts
// a new node with value newvalue following the node containing oldvalue.
template<class T>
void List<T>::insertafter(T oldvalue,T newvalue) {
	NP p, q;
	for (p = listptr; p != 0 && p->info != oldvalue; p = p->next);
	if (p == 0) {
		cout << "Error: value sought is not in the list.";
		exit(1);
	}
	q = new node;
	q->info = newvalue;
	q->next = p->next;
	p->next = q;
}

// Determines if the list is empty.
template<class T>
T List<T>::emptylist() {
	return(listptr == 0);
}

// Push (add newvalue) adds a new node with a given value to the front of the list
template<class T>
void List<T>::push(T newvalue) {
	NP p;
	p = new node;
	p->info = newvalue;
	p->next = listptr;
	listptr = p;
}

// Pop deletes the first node of the list and returns its contents.
template<class T>
T List<T>::pop() {
	NP p;
	T x;
	if (emptylist()) {
		cout << "Error: the list is empty. ";
		exit(1);
	}
	p = listptr;
	listptr = p->next;
	x = p->info;
	delete p;
	return x;
}

// Deletes the first node containing the value oldvalue from the list.
template< class T>
void List<T>::deleteItem(T oldvalue) {
	NP p, q;
	for (q = 0, p = listptr; p != 0 && p->info != oldvalue; q = p, p = p->next);
	if (p == 0) {
		cout << "Error: value sought is not in the list. ";
		exit(1);
	}
	if (q == 0)
		listptr = p->next;
	else
		q->next = p->next;
	delete p;
}

// Delete the node that appear after the old value
template< class T>
void List<T>::deleteafter(T oldvalue) {
	NP p, q;
	for (p = listptr,q = p->next ; p != 0 && p->info != oldvalue; p=q,q = p->next);
	if (p == 0) {
		cout << "Error: value sought is not in the list. ";
		exit(1);
	}
	else if (p->info == oldvalue)
	{
		p->next = q->next;
		delete q;
	}
}

// Create a linked list of length len pointed by ptr // the values of info part are input from keyboard
template<class T>
void List<T>:: makeStr(int len) {
	if (len <= 0) return;

	NP last = NULL;

	for (int i = 0; i < len; i++) {
		int val;
		cout << "Enter value for node " << i + 1 << ": ";
		cin >> val;

		NP newNode = new node;
		newNode->info = val;
		newNode->next = NULL;

		if (!listptr) {
			listptr = newNode;
		}
		else {
			last->next = newNode;
		}
		last = newNode;
	}
}

// Display all the elements of Linked List
template<class T>
void List<T>::displayStr() {
	NP temp = listptr;
	while (temp) {
		cout << temp->info << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

// Delete the last node
template<class T>
void List<T>::deletelast() {
	NP p, q,c;
	for (c=0,p = listptr, q = p->next; q != 0;c=p, p = q, q = p->next);
	if (q == 0) {
		c->next = NULL;
		delete p;
	}
}