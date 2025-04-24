#include<iostream>
#include"Queue.h"
using namespace std;

template<class ItemType>
Queue<ItemType>::Queue() {
	maxQue = 501;
	front = 0; rear = 0; count = 0; items = new ItemType[maxQue];
}

template<class ItemType>
Queue<ItemType>::Queue(int max) {
	maxQue = max ;
	front = 0; rear = 0; count = 0; items = new ItemType[maxQue];
}

template<class ItemType>
Queue<ItemType>::~Queue() {
	delete[] items;
}

template<class ItemType>
int Queue<ItemType>::IsEmpty() const {
	return (count == 0);
}

template<class ItemType>
int Queue<ItemType>::IsFull() const {
	return (count == maxQue);
}

template<class ItemType>
void Queue<ItemType>::Insert(ItemType newitem) {
	if (IsFull()) {
		cout << "Over flow";
	}
	else {
		items[rear] = newitem;
		rear = (rear + 1) % maxQue;
		++count;
	}
}

template<class ItemType>
void Queue<ItemType>::Remove(ItemType& item) {
	if (IsEmpty()) {
		cout << "Under flow\n";
	}
	else {
		item = items[front];
		front = (front + 1) % maxQue;
		--count;
	}
}