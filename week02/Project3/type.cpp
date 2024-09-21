#include<iostream>
using namespace std;

void type(int a) {
	cout << a << " 는 정수형입니다." << endl;
}

void type(double a) {
	cout << a << " 는 실수형입니다." << endl;
}

void type(const char* a) {
	cout << a << " 는 문자열입니다." << endl;
}

void type(bool a) {
	cout << boolalpha << a << " 는 논리형입니다." << endl;
}

int main(void) {

	type(1004);
	type(3.14);
	type("hello");
	type(true);
	return 0;
}