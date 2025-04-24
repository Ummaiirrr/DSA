#pragma once
template<class ItemType>
class DeQueue {
private:
	ItemType* items; 
	int front, rear, count, maxQue;
public:
	DeQueue();
	DeQueue(int max);
	~DeQueue();
	int IsEmpty() const;
	int IsFull() const;
	void InsertRear(ItemType newitem);
	void InsertFront(ItemType newitem);
	void RemoveRear(ItemType& item);
	void RemoveFront(ItemType& item);
};