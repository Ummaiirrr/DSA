//Exercise 1.1
//Code
//#include <iostream>
//#include<math.h>
//using namespace std;
//class Complex {
//private:
//	float re; float im;
//public:
//	Complex(float r, float i) { re = r; im = i; }
//	Complex(float r) { re = r; im = 0.0; }
//	~Complex() {}
//	double Magnitude() {
//		return sqrt(re * re + Imag() * Imag());
//	}
//	float Real() { return re; }
//	float Imag() { return im; }
//	Complex  operator+(Complex b) {
//		return Complex(re + b.re, im + b.im);
//	}
//	Complex operator=(Complex b) {
//		re = b.re, im = b.im; return *this;
//	}
//	Complex operator*(Complex b) {
//		return Complex(re * b.re, im * b.im);
//	}
//};
//int main() {
//	Complex a(1.0, 1.0);
//	Complex* b = new Complex(5.0);
//	Complex c(0, 0);
//	Complex d(0, 0);
//	cout << "a real = " << a.Real() << " a imaginary = " << a.Imag() << endl;
//	cout << "b real = " << b->Real() << " b imaginary = " << b->Imag() << endl;
//	c = a + (*b);
//	cout << "c real = " << c.Real() << " c imaginary = " << c.Imag() << endl;
//	d = a * (*b);
//	cout << "d real = " << d.Real() << " d imaginary = " << d.Imag() << endl;
//	delete b;
//	return 0;
//}

//Exercise 1.2
//Code
//#include <iostream>
//using namespace std;
//template<class T>
//class mypair
//{
//private:
//	T a, b;
//public:
//	mypair(T first, T second) {
//		a = first;  b = second;
//	}
//	T getmax();
//	T getmin();
//};
//template <class T>
//T mypair<T>::getmax() {
//	T retval;
//	retval = a > b ? a : b;
//	return retval;
//}
//template <class T>
//T mypair<T>::getmin() {
//	T retval;
//	retval = a < b ? a : b;
//	return retval;
//}
//int main() {
//	mypair<int>myobject1(100, 75);
//	mypair<float>myobject2(7, 10);
//	cout << myobject1.getmax() << endl;
//	cout << myobject1.getmin() << endl;
//	cout << myobject2.getmax() << endl;
//	cout << myobject2.getmin() << endl;
//	return 0;
//}

//Exercise 1.3
//Code
//#include <iostream>
//using namespace std;
//
//template <class T, int N>
//class mysequence {
//private:
//    T memblock[N];
//public:
//    void setmember(int x, T value);
//    T getmember(int x);
//    T getmax();
//    T getmin();
//};
//template<class T, int N>
//void mysequence<T, N>::setmember(int x, T value) {
//    memblock[x] = value;
//}
//
//template<class T, int N>
//T mysequence<T, N>::getmember(int x) {
//    return memblock[x];
//}
//
//template <class T, int N>
//T mysequence<T, N>::getmax() {
//    T maxvalue = memblock[0];
//    for (int i = 1; i < N; i++) {
//        if (memblock[i] > maxvalue) {
//            maxvalue = memblock[i];
//        }
//    }
//    return maxvalue;
//}
//
//template <class T, int N>
//T mysequence<T, N>::getmin() {
//    T minvalue = memblock[0];
//    for (int i = 1; i < N; i++) {
//        if (memblock[i] < minvalue) {
//            minvalue = memblock[i];
//        }
//    }
//    return minvalue;
//}
//
//int main() {
//    mysequence<int, 5> myints;
//    mysequence<float, 5> myfloats;
//
//    myints.setmember(0, 100);
//    myints.setmember(1, 110);
//    myints.setmember(2, 120);
//    myints.setmember(3, 130);
//    myints.setmember(4, 140);
//
//    myfloats.setmember(0, 2.1416);
//    myfloats.setmember(1, 1.1416);
//    myfloats.setmember(2, 4.1416);
//    myfloats.setmember(3, 3.1416);
//    myfloats.setmember(4, 5.1416);
//
//    cout << "myints[0]: " << myints.getmember(0) << "\n";
//    cout << "myfloats[3]: " << myfloats.getmember(3) << "\n";
//
//    cout << "Max (int): " << myints.getmax() << endl;
//    cout << "Min (int): " << myints.getmin() << endl;
//    cout << "Max (float): " << myfloats.getmax() << endl;
//    cout << "Min (float): " << myfloats.getmin() << endl;
//
//    return 0;
//}

//Exercise 1.4
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    ofstream outfile("fout.txt");
//    ifstream infile("finn.txt");
//
//    if (!infile) {
//        cout << "Error opening input file!" << endl;
//        return 1;
//    }
//
//    char ch;
//    int charcount = 0, wordcount = 0, sentencecount = 0;
//
//    while (infile.get(ch)) {
//        outfile << ch;
//        charcount++;
//
//        if (ch == ' ' || ch == '\n' || ch == '\t') {
//            wordcount++;
//        }
//
//        if (ch == '.' || ch == '!' || ch == '?') {
//            sentencecount++;
//        }
//    }
//    outfile << "\n\nCharacter count = " << charcount << endl;
//    outfile << "Sentence count = " << sentencecount << endl;
//    outfile << "Word count = " << wordcount << endl;
//
//    infile.close();
//    outfile.close();
//    return 0;
//}


// Example 1.5
// #include <iostream>
//#include <iomanip>
//using namespace std;
//
//class House {
//private:
//    char owner[20];
//    char address[20];
//    int bedrooms;
//    float price;
//
//public:
//    void readData() {
//        cout << "Enter Owner: ";
//
//        cin.getline(owner, 20);
//
//        cout << "Enter Address: ";
//        cin.getline(address, 20);
//
//        cout << "Number of Bedrooms ?: ";
//        cin >> bedrooms;
//
//        cout << "Price: ";
//        cin >> price;
//    }
//
//    void displayData() const {
//        cout << left << setw(10) << "Owner" << " "
//            << setw(15) << "Addess" << " "
//            << setw(8) << "Bedrooms" << " "
//            << fixed << setprecision(2) << price << endl;
//        cout << left << setw(10) << owner << " "
//            << setw(15) << address << " "
//            << setw(8) << bedrooms << " "
//            << fixed << setprecision(2) << price << endl;
//    }
//};
//
//int main() {
//    House available[100];
//    int count = 0;
//    char choice;
//
//
//    do {
//        available[count].readData();
//        count++;
//
//        cout << "Enter another house? (Y/N): ";
//        cin >> choice;
//    } while (choice == 'Y' || choice == 'y');
//
//
//
//    cout << "------------------------------------------\n";
//    for (int i = 0; i < count; i++) {
//        available[i].displayData();
//    }
//
//    return 0;
//}

// Example 1.6
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//class Student {
//private:
//    char name[30];
//    int grades[10];
//    float average;
//public:
//    void readData(ifstream& infile, int numGrades);
//    void computeAverage(int numGrades);
//    void display() const;
//    float getAverage() const { return average; }
//    const char* getName() const { return name; }
//};
//
//void Student::readData(ifstream& infile, int numGrades) {
//    infile.getline(name, 30);
//    for (int i = 0; i < numGrades; i++) {
//        infile >> grades[i];
//    }
//}
//
//void Student::computeAverage(int numGrades) {
//    int sum = 0;
//    for (int i = 0; i < numGrades; i++) {
//        sum += grades[i];
//    }
//    average = (numGrades > 0) ? (float)sum / numGrades : 0;
//}
//
//void Student::display() const {
//    cout << name << "\t";
//    cout << average << endl;
//}
//
//int main() {
//    char filename[50];
//    cout << "Enter filename: ";
//    cin >> filename;
//
//    ifstream infile(filename);
//    if (!infile) {
//        cout << "Error opening file!" << endl;
//        return 1;
//    }
//
//    int numStudents, numGrades;
//    infile >> numStudents >> numGrades;
//
//    Student students[100];
//    float totalAverage = 0, highest = 0, lowest = 100;
//    int highestIndex = 0, lowestIndex = 0;
//
//    for (int i = 0; i < numStudents; i++) {
//        students[i].readData(infile, numGrades);
//        students[i].computeAverage(numGrades);
//
//        float avg = students[i].getAverage();
//        totalAverage += avg;
//
//        if (avg > highest) {
//            highest = avg;
//            highestIndex = i;
//        }
//        if (avg < lowest) {
//            lowest = avg;
//            lowestIndex = i;
//        }
//    }
//
//    float classAverage = totalAverage / numStudents;
//
//    cout << "\nStudent Grades Summary:\n";
//    cout << "Name\tAverage\n";
//    cout << "----------------------\n";
//    for (int i = 0; i < numStudents; i++) {
//        students[i].display();
//    }
//
//    cout << "\nClass Average: " << classAverage << endl;
//    cout << "Highest Average: " << students[highestIndex].getName() << " - " << highest << endl;
//    cout << "Lowest Average: " << students[lowestIndex].getName() << " - " << lowest << endl;
//
//    cout << "\nStudents below class average:\n";
//    for (int i = 0; i < numStudents; i++) {
//        if (students[i].getAverage() < classAverage) {
//            cout << students[i].getName() << endl;
//        }
//    }
//
//    infile.close();
//    return 0;
//}
