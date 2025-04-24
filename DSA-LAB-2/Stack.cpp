#include<stdlib.h>
#include"Stack.h"
#include<iostream>
using namespace std;
Stack::Stack() {
	top = -1;
}

int Stack::IsEmpty() const {
	return(top == -1);
}
int Stack::Isfull() const {
	return (top == MAX_ITEMS - 1);
}
void Stack::Push(ItemType newitem) {
	if (Isfull()) {
		cout << "Stack Overflow" << endl;
		exit(1);
	}
	top++;
	items[top] = newitem;
}
void Stack::Pop(ItemType& item) {
	if (IsEmpty()) {
		cout << "Stack Underflow" << endl;
		exit(1);
	}
	item = items[top];
	top--;
}
void Stack::Popstr(itemType& item) {
	if (IsEmpty()) {
		cout << "Stack Underflow" << endl;
		exit(1);
	}
	item = items[top];
	top--;
}
ItemType Stack::Peek() {
    if (IsEmpty()) {
        cout << "Stack is empty" << endl;
        exit(1);
    }
    return items[top];
}

void Stack::Reverse(itemType str[]) {
    Stack s;
    int i = 0;
    while (str[i] != '\0') {
        s.Push(str[i]);
        i++;
    }

    cout << "Reversed String = ";

    while (!s.IsEmpty()) {
        itemType ch;  
        s.Popstr(ch);
        cout << ch;
    }
    cout << endl;
}





#include "Stack.h"
#include <iostream>
#include <cstdlib> 
#include<string>
#include<cctype>
using namespace std;

template<class ItemType>
Stack<ItemType>::Stack() {
	maxStack = 500;
	top = -1;
	items = new ItemType[500];
}

template<class ItemType>
Stack<ItemType>::Stack(int max) {
	maxStack = max;
	top = -1;
	items = new ItemType[max];
}

template<class ItemType>
Stack<ItemType>::~Stack() {
	delete[] items;
}

template<class ItemType>
int Stack<ItemType>::IsEmpty() {
	return (top == -1);
}

template<class ItemType>
int Stack<ItemType>::IsFull() {
	return (top == maxStack - 1);
}

template<class ItemType>
void Stack<ItemType>::Push(ItemType newitem) {
	if (IsFull()) {
		cout << "Stack Overflow" << endl;
		exit(1);
	}
	items[++top] = newitem;
}

template<class ItemType>
void Stack<ItemType>::Pop(ItemType& item) {
	if (IsEmpty()) {
		cout << "Stack Underflow" << endl;
		exit(1);
	}
	item = items[top--];
}

template<class ItemType>
bool Stack<ItemType>::validity( string& exp) {
	Stack<char> s;

	for (int i = 0; i < exp.length(); i++) {
		if (exp[i] == '{'|| exp[i] == '['|| exp[i] == '(') {
			s.Push('(');
		}
		else if (exp[i] == '}'|| exp[i] == ']'|| exp[i] == ')') {
			if (s.IsEmpty()) {
				cout << "Expression is Unbalanced." << endl;
				return false;
			}
			char temp;
			s.Pop(temp);
		}
	}

	if (!s.IsEmpty()) {
		cout << "Expression is Unbalanced." << endl;
		return false;
	}

	cout << "Expression is Balanced." << endl;
	return true;
}

template<class ItemType>
ItemType Stack<ItemType>::Peek() {
	if (IsEmpty()) {
		cout << "Stack is empty" << endl;
		exit(1);
	}
	return items[top];
}

template<class ItemType>
int Stack<ItemType>::precedence(ItemType op){
	if (op == '+' || op == '-') {
		return 1;
	}
	if (op == '/' || op == '*') {
		return 2;
	}
	return 0;
}

template <class ItemType>
string Stack<ItemType>::infixtopostfix(string& infix) {
	Stack<char> s;
	string postfix;
	for (int i = 0; i < infix.length(); i++) {
		char ch = infix[i];
		if (isalnum(ch)) {
			postfix += ch;
		}
		else if (ch == '{'|| ch == '['||ch == '(') {
			s.Push(ch);
		}
		else if (ch == '}'||ch == ']'|| ch == ')') {
			char topChar;
			while (!s.IsEmpty()) {
				s.Pop(topChar);
				if (topChar == '(') break;
				postfix += topChar;
			}
		}
		else {
			while (!s.IsEmpty() && precedence(s.Peek()) >= precedence(ch)) {
				char topChar;
				s.Pop(topChar);
				postfix += topChar;
			}
			s.Push(ch);
		}
	}
	while (!s.IsEmpty()) {
		char topChar;
		s.Pop(topChar);
		postfix += topChar;
	}
	return postfix;
}


template <class ItemType>
int Stack<ItemType>::evaluatePostfix(string& exp) {
	Stack<int>s;
	for (int i = 0; i < exp.length(); i++) {
		char ch = exp[i];
		if (isdigit(ch)) {
			s.Push(ch-'0');
		}
		else {
			int val1, val2;
			s.Pop(val2);
			s.Pop(val1);
			int result;
			switch (ch) {
			case '+': result = val1 + val2; break;
			case '-': result = val1 - val2; break;
			case '*': result = val1 * val2; break;
			case '/': result = val1 / val2; break;
			default:
				cout << "Invalid operator!" << endl;
				return -1;
			}
			s.Push(result);  // Push result back onto the stack
		}
	}
	int finalresult;
	s.Pop(finalresult);
	return finalresult;
}