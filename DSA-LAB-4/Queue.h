#pragma once
template<class ItemType>
class Queue {
private:
	ItemType* items;
	int front, rear, count, maxQue;
public:
	Queue();
	Queue(int max);
	~Queue();
	int IsEmpty() const;
	int IsFull() const;
	void Insert(ItemType newitem);
	void Remove(ItemType& item);
};