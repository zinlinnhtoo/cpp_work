#include<iostream>
using namespace std;

void introduce(const char* name, int age = 20, const char* nationality = "���� �α�");

int main(void) {
	introduce("������");
	introduce("����", 25);
	return 0;
}

void introduce(const char* name, int age, const char* nationality) {
	cout << "�γ��ϼ���, �� �̸��� " << name << "�Դϴ�." << endl;
	cout << "���� " << age << "���̰�, " << nationality << "���� �Խ��ϴ�." << endl;
}