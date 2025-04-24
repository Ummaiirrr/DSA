#pragma once
#include"Queue.h"
using namespace std;
template<class ItemType>
class PQue {
public:
	PQue(int N);
	PQue();
	~PQue();
	int isFull() const;
	int isEmpty() const;
	void insert(ItemType newItem, int p);
	void remove(ItemType& item);
private:
	Queue <ItemType>* pQ;
	/*Queue <ItemType>pQ[10];*/
	int N;
};

template<class ItemType>
PQue<ItemType>::PQue(int N) {
	this->N = N;
	pQ = new Queue<ItemType>[N];
}

template<class ItemType>
PQue<ItemType>::PQue() {
}

template<class ItemType>
PQue<ItemType>::~PQue() {
	delete[]pQ;
}

template<class ItemType>
int PQue<ItemType>::isEmpty() const {
	for (int i = 0; i < N; i++) {
		if (!pQ[i].IsEmpty()) {
			return 0;
		}
	}
	return 1;
}

template<class ItemType>
int PQue<ItemType>::isFull() const {
	for (int i = 0; i < N; i++) {
		if (!pQ[i].IsFull()) {
			cout << "\nThis " << i << " Queue is not full";
		}
	}
	cout << "\nAll Queues are full";
}

template<class ItemType>
void PQue<ItemType>::insert(ItemType newitem, int p) {
	if (pQ[p].IsFull()) {
		cout << p << " is full (Over Flow)";
	}
	else {
		pQ[p].Insert(newitem);
	}
}

template<class ItemType>
void PQue<ItemType>::remove(ItemType& item) {
	for (int i = 0; i < N; i++) {
		if (!pQ[i].IsEmpty()) {
			pQ[i].Remove(item);
			return;
		}
	}
	cout << "\n All Queues are empty";
}

