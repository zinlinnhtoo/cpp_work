#include<iostream>
using namespace std;

int increment(int n);

int main() {
	int x = 0;
	int num;
	num = increment(x);
	cout << num << endl;
	return 0;
}

int increment(int n) {
	n++;
	return n;
}