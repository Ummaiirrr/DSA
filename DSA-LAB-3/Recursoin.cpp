//Example 3.1
#include<iostream>
#include<conio.h>
using namespace std;
//int fact(int n) {
//	if (n == 0)
//		return 1;
//	else
//		return n * fact(n - 1);
//}
//int main() {
//	cout << fact(5) << endl;
//	getch();
//	return 0;
//}

//Example 3.2
//void rev() {
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//		rev();
//		cout.put(ch);
//	}
//}
//int main() {
//	rev();
//	_getch();
//	return 0;
//}

//Example 3.3
//int Power(int X, int N) {
//	if (N == 0)
//		return 1;
//	else
//		return Power(X, N - 1) * X;
//}
//int main() {
//	int N = 20;
//	for (int i = 0; i <= N; i++) {
//		cout << "2 ^ " << i << " = " << Power(2, i) << endl;;
//	}
//	return 0;
//}

//Example3.4
//int Achermann(int m, int n) {
//	if (m == 0) {
//		return n + 1;
//	}
//	else if (m > 0 && n == 0) {
//		return Achermann(m - 1, 1);
//	}
//	else if (m > 0 && n > 0) {
//		return Achermann(m - 1, Achermann(m, n - 1));
//	}
//}
//int main() {
//	cout << "Achermann (3, 4) = "<< Achermann(3, 4);
//	return 0;
//}

//Exercise 3.3
// ( a )
//int print(int n) {
//	if (n < 0) {
//		return 1;
//	}
//	else {
//		cout << n << " \n "; print(n - 1);
//	}
//}
//int main() {
//	print(10);
//	return 0;
//}

// ( b )
//int C(int n, int k) {
//	if (k == n) {
//		return 1;
//	}
//	else if (k == 0) {
//		return 1;
//	}
//	else if(k>0&&k<n&&n>1) {
//		return C(n - 1, k - 1) + C(n - 1, k);
//	}
//}
//int main() {
//	cout << C(5, 3);
//	return 0;
//}

// ( c )
//bool isPrime(int n, int i = 2) {
//	if (n <= 2) 
//		return (n==2)? true : false;
//	if (n % i == 0)
//		return false;
//	if (i * i > n)
//		return true;
//	// Check for next divisor
//	return isPrime(n, i + 1);
//}
//int main() {
//	int n = 2;
//	if (isPrime(n))
//		cout << "Yes";
//	else
//		cout << "No";
//	return 0;
//}