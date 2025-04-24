#include<iostream>
#include"Queue.cpp"
using namespace std;

int main() {
	/*int size;
	cout << "Enter the size of Queue ";
	cin >> size;*/
	Queue<int>s;
	int num;
	cout << "\nEnter num in Queue\n";
	for (int i = 0; i < 9; i++) {
		cin >> num;
		s.Insert(num);
	}
	cout << "\nRemove numbers from Queue = ";
	for (int i = 0; i < 9; i++) {
		int removeditem;
		s.Remove(removeditem);
		cout << removeditem << " ";
	}
	system("pause");
	return 0;
}