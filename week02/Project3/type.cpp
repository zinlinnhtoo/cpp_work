#include<iostream>
using namespace std;

void type(int a) {
	cout << a << " �� �������Դϴ�." << endl;
}

void type(double a) {
	cout << a << " �� �Ǽ����Դϴ�." << endl;
}

void type(const char* a) {
	cout << a << " �� ���ڿ��Դϴ�." << endl;
}

void type(bool a) {
	cout << boolalpha << a << " �� �����Դϴ�." << endl;
}

int main(void) {

	type(1004);
	type(3.14);
	type("hello");
	type(true);
	return 0;
}