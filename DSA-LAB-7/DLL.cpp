#include"DLL.h"
#include<iostream>
#include<conio.h>
using namespace std;

template<class T>
void double_linked<T>::push_back(T data) {
	tail = new node(data, tail, NULL);
	if (empty())
		head = tail;
	if (tail->prev)
		tail->prev->next = tail;
}

template<class T>
void double_linked<T>::push_front(T data) {
	head = new node(data, NULL, head);
	if (empty())
		tail = head;
	if (head->next)
		head->next->prev = head;
}

template<class T>
T double_linked<T>::pop_back() {
	if (empty())
		throw("double_linked: list empty");
	node* temp(tail);
	T data(tail->data);
	tail = tail->prev;
	if (tail)
		tail->next = NULL;
	else
		head = NULL;
	delete temp;
	return data;
}

template<class T>
T double_linked<T>::pop_front() {
	if (empty())
		throw("double_linked:list empty");
	node* temp(head);
	T data(head->data);
	head = head->next;

	if (head)
		head->prev = NULL;
	else
		tail = NULL;
	delete temp;
	return data;
}