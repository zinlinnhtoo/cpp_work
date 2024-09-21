#include<iostream>
using namespace std;

int& increment(int& n);

int main() {
	int x = 0;
	int& y = increment(x);
	cout << "Return by reference: " << y << endl;
	return 0;
}

int& increment(int& n) {
	n++;
	return n;
}