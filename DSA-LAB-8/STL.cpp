#include<vector>
#include<stack>
#include<list>
#include<deque>
#include<bitset>
#include<algorithm>
#include<numeric>
#include<cassert>
#include<string>
#include<iostream>
#include<conio.h>
#include <set>
#include <map>

using namespace std;

//Example 12.1

//int main() {
//	vector<int>v;
//	for (int i = 0; i < 25; i++)
//		v.push_back(i);
//	random_shuffle(v.begin(), v.end());
//	for (int j = 0; j < 25; j++)
//		cout << v[j] << " ";
//	cout << endl;
//	_getch();
//	return 0;
//}


// Example 12.2

//int main() {
//	list<int>v;
//	for (int i = 0; i < 25; i++)
//		v.push_back(i);
//	for (int j = 0; j < 25; j++) {
//		cout << v.front() << " ";
//		v.pop_front();
//	}
//	cout << endl;
//	_getch();
//	return 0;
//}

//Example 12.3

//int main() {
//	deque<int>v;
//	for (int i = 0; i < 25; i++)
//	     	v.push_back(i);
//    random_shuffle(v.begin(), v.end());
//	for (int j = 0; j < 25; j++){
//		cout << v.front() << " ";
//			v.pop_front();
//	}
//   cout << endl;
//   _getch();
//	return 0;
//}

//Example 12.4

//int main() {
//	stack<int, list<int>>stk;
//	for (int i = 1; i <= 10; i++)
//		stk.push(i);
//	while (!stk.empty()) {
//		cout << stk.top() << endl;
//		stk.pop();
//	}
//	_getch();
//	return 0;
//}

//Example 12.5

//int main() {
//	bitset<16>b1("1011011110001011");
//	bitset<16>b2;
//	b2 = ~b1;
//	for (int i = b2.size() - 1; i >= 0; i--)
//		cout << b2[i];
//	cout << endl;
//	_getch();
//	return 0;
//}

//Example 12.6

//const int N = 100;
//
//int main() {
//	vector<int>iv(N);
//	iv[50] = 37;
//	vector<int>::iterator iter = find(iv.begin(), iv.end(), 37);
//	if (iter == iv.end())
//		cout << "Not Found!\n";
//	else
//		cout << "Found at " << iter - iv.begin() << "\n";
//	_getch();
//	return 0;
//}


//Example 12.7

//int set1[] = { 1,2,3 };
//int set2[] = { 1,2,3 };
//vector<int>set3(10);
//
//int main() {
//	vector<int>::iterator first = set3.begin();
//	vector<int>::iterator last = set_union(set1,set1 + 3,set2, set2 + 3, first);
//	while (first != last) {
//		cout << *first << " ";
//		first++;
//	}
//	cout << endl;
//	_getch();
//	return 0;
//}

// Example 12.8

//int vec1[10];
//int vec2[10];
//
//int main() {
//	fill(vec1, vec1 + 10, -1);
//	for (int i = 0; i < 10; i++)
//		cout << vec1[i] << " ";
//	cout << endl;
//	fill_n(vec2, 5, -1);
//	for (int j = 0; j < 10; j++)
//		cout << vec2[j] << " ";
//	cout << endl;
//	_getch();
//	return 0;
//}

//Example 12.9

//int vec[] = { 1,2,3,4,5 };
//
//int main() {
//	int sum = accumulate(vec, vec + 5, 0);
//	cout << sum << endl;
//	int prod = accumulate(vec, vec + 5, 1, times<int>());
//	cout << prod << endl;
//	_getch();
//	return 0;
//}

//Example 12.10

//class String {
//	char* str;
//public:
//	String() {
//		str = 0;
//	}
//	String(char* s) {
//		str = strdup(s);
//		assert(str);
//	}
//	int operator<(const String& s)const {
//		return strcmp(str, s.str) < 0;
//	}
//	operator char* () {
//		return str;
//	}
//};
//char* list[] = { "epsilon","omega","theta","rho","alpha","beta","phi","gamma","delta"};
//const int N = sizeof(list) / sizeof(char*);
//
//int main() {
//	int i, j;
//	vector<String>v;
//	for (int i = 0; i < N; i++) {
//		v.push_back(String(list[i]));
//	}
//	random_shuffle(v.begin(), v.end());
//	for (int j = 0; j < N; j++)
//		cout << v[j] << " ";
//	cout << endl;
//	sort(v.begin(), v.end());
//	for (int j = 0; j < N; j++)
//		cout << v[j] << " ";
//	cout << endl;
//	_getch();
//	return 0;
//}

//Example 12.11

//int main() {
//	typedef map < string, long, less<string>MAP;
//	MAP counter;
//	char buf[256];
//	while (cin >> buf)
//		counter[buf]++;
//	MAP::iterator it = counter.begin();
//	while (it != counter.end()) {
//		cout << (*it).first << " " << (*it).second << endl;
//		it++;
//	}
//	_getch();
//	return 0;
//}