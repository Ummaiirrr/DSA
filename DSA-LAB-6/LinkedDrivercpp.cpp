#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include"LinkedList.cpp"
using namespace std;
int main() {
	List<int>L;
	int len;
	/*L.push(10);
	L.push(20);
	L.push(40);
	L.push(50);
	L.deleteafter(40);
	L.insertafter(10, 30);
	L.deleteItem(50);
	while (!L.emptylist()) {
		cout << L.pop() << endl;
	} */
	/*string str,reversedstr;
	cout << "Enter a string to reverse it = ";
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		L.push(str[i]);
	}
	for (int i = 0; i < str.length(); i++) {
		reversedstr+=L.pop();
	}
	cout << "\nReversed string = " << reversedstr;*/

	cout << "Enter the length of Linked List = ";
	cin >> len;
	L.makeStr(len);

	cout << "\n Display all the nodes of Linked List = ";
	L.displayStr();

	L.deletelast();

	cout << "\n Display all the nodes of Linked List = ";
	L.displayStr();
	_getch();
	return 0;
}