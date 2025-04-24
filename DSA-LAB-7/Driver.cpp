#include<iostream>
#include<conio.h>
#include"DLL.cpp"
using namespace std;
int main() {
	int arr[] = { 4,5,6,8,32,19 };
	double_linked<int>dlist(arr);

	dlist.push_back(11);
	dlist.push_front(100);

	while (dlist)
		cout << dlist.pop_front() << " ";

	_getch();
	return 0;
}