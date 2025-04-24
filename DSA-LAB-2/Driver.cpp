#include <iostream>
#include "Stack.cpp"
int main() {
	Stack s;
	char a;
	int item;
	for (int i = 0; i < 20; i++) {
		s.Push(i);
	}

	cout << "Item At the top of Stack is = " << s.Peek() << endl;

	for (int i = 0; i < 20; i++) {
		s.Pop(item);
		cout << item<<"\t";
	}
	cout << "\n____________________________________________________\n";
	cout << "Enter a string to reverse it  \n";
	char str[100];
	cin >> str;
	s.Reverse(str);
	return 0;
}









#include <iostream>
#include "Stack.cpp"

using namespace std;

int main() {
	Stack<int> IntStack;
	Stack<float> FloatStack;
	Stack<char> CharStack;

	string ch = "{3*9*(3-2)}"; 
	int data;
	float val;

	IntStack.Push(35);
	FloatStack.Push(3.1415927);

	IntStack.Pop(data);
	cout << data << endl;

	FloatStack.Pop(val);
	cout << val << endl;

	cout << "Check Validity of the Expression ! \n";
	CharStack.validity(ch); 

	cout << "\nCheck Another \n";
	string chh;
	cin >> chh;
	CharStack.validity(chh);

	string infix;
	cout << "\nEnter infix expression: ";
	cin >> infix;

	cout << "\nPostfix: " <<CharStack.infixtopostfix(infix) << endl;

	string Postfix;
	cout << "\nEnter Postfix expression: ";
	cin >> Postfix;

	cout << "\nPostfix: " << CharStack.evaluatePostfix(Postfix) << endl;
	return 0;
}
