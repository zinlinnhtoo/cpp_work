#include<iostream>
using namespace std;

void introduce(const char* name, int age = 20, const char* nationality = "대한 민국");

int main(void) {
	introduce("진린투");
	introduce("진진", 25);
	return 0;
}

void introduce(const char* name, int age, const char* nationality) {
	cout << "인녕하세요, 제 이름은 " << name << "입니다." << endl;
	cout << "저는 " << age << "실이고, " << nationality << "에서 왔습니다." << endl;
}