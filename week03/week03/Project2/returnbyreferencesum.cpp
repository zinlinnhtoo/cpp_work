#include<iostream>
using namespace std;

int& sum(int& a, int& b, int& result);

int main() {
	int num1 = 1;
	int num2 = 5;
	int add = 0;
	int& result = sum(num1, num2, add);
	cout << result << endl;

	return 0;
}

int& sum(int& a, int& b, int& add) {
	add = a + b;
	return add;
}