#include<iostream>
#include"DeQueue.cpp"
using namespace std;

int main() {
	DeQueue<int>s;
	int num;
    cout << "Enter 3 numbers from right\n";
	for (int i = 0; i < 3; i++) {
		cin >> num;
		s.InsertRear(num);
	}
	cout << "Remove numbers from right\n";
	for (int i = 0; i < 3; i++) {
		int removeditem;
		s.RemoveRear(removeditem);
		cout << removeditem << " \n";
	}
	cout << "\nEnter 3 numbers from Left\n";
	for (int i = 0; i < 3; i++) {
		cin >> num;
		s.InsertFront(num);
	}
	cout << "Remove numbers from Left\n";
	for (int i = 0; i < 3; i++) {
		int removeditem;
		s.RemoveFront(removeditem);
		cout << removeditem << " \n";
	}
	system("pause");
	return 0;
}