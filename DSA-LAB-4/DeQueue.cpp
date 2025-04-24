#include<iostream>
#include"DeQueue.h"
using namespace std;

template<class ItemType>
DeQueue<ItemType>::DeQueue() {
	maxQue = 501;
	front = -1; rear = -1; count = 0; items = new ItemType[maxQue];
}

template<class ItemType>
DeQueue<ItemType>::DeQueue(int max) {
	maxQue = max ;
	front = -1; rear = -1; count = 0; items = new ItemType[maxQue];
}

template<class ItemType>
DeQueue<ItemType>::~DeQueue() {
	delete[] items;
}

template<class ItemType>
int DeQueue<ItemType>::IsEmpty() const {
	return (count == 0);
}

template<class ItemType>
int DeQueue<ItemType>::IsFull() const {
	return (count == maxQue);
}

template<class ItemType>
void DeQueue<ItemType>::InsertRear(ItemType newitem) {
	if (IsFull()) {
		cout << "Over flow";
	}
	else if (rear == -1) {
		rear = 0; front = 0;
	}
	else if (rear == maxQue) {
		rear = 0;
	}
	else {
		rear = rear + 1;

	}
	items[rear] = newitem;
	count++;
}

template<class ItemType>
void DeQueue<ItemType>::InsertFront(ItemType newitem) {
	if (IsFull()) {
		cout << "Over flow";
	}
	else if (front == -1) {
		front = 0; rear = 0;
	}
	else if (front == 0) {
		front = maxQue;
	}
	else {
		front = front - 1;
	}
	items[front] = newitem;
	count++;
}

template<class ItemType>
void DeQueue<ItemType>::RemoveRear(ItemType& item) {
	if (IsEmpty()) {
		cout << "Under flow";
	}
	item = items[rear];
	if (front == rear) {
		rear = -1; front = -1;
	}
	else if (rear == 0) {
		rear = maxQue;
	}
	else {
		rear = rear - 1;
	}
	count--;

}

template<class ItemType>
void DeQueue<ItemType>::RemoveFront(ItemType& item) {
	if (IsEmpty()) {
		cout << "Under flow\n";
	}
	item = items[front];
	if (front == rear) {
		rear = -1; front = -1;
	}
	else if (front == maxQue) {

		front = 0;
	}
	else {
		front = front + 1;
	}
	count--;

}
