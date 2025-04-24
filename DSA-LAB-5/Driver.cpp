#include<iostream>
#include<conio.h>
#include"PriorityQ.h"
using namespace std;
int main() {
    /*PQue<int>pQ;*/
	int N;
	cout << "Enter Number of priority levels: ";
	cin >> N;
	PQue<int>pQ(N);
	int value;
	cout << "Enter values in the Queue.";
	for (int i = 0; i < N; i++) {
		cout << "\nPriority Level " << i + 1 << " = ";
		cin >> value;
		pQ.insert(value, i);
	}
	for (int i = 0; i < N; i++) {
		cout << "\nPriority Level " << i + 1 << " = ";
		cin >> value;
		pQ.insert(value, i);
	}
	for (int i = 0; i < N; i++) {
		cout << "\nPriority Level " << i + 1 << " = ";
		cin >> value;
		pQ.insert(value, i);
	}
	int remove;
	while (!pQ.isEmpty()) {
		cout << "\nRemove Value from Priority Queue = ";
		pQ.remove(remove);
		cout << "  " << remove;
	}
	_getch();
	return 0;
}

