#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num);

int main(void) {
	
	int n;
	cout << "숫자를 입력하세요: ";
	cin >> n;

	if (isPrime(n)) {
		cout << "입력힌 숫자 " << n << "은소수 입니다." << endl;
	}
	else
	{
		cout << "입력힌 숫자 " << n << "은소수 아닙니다." << endl;
	}
	return 0;
}

bool isPrime(int num) {
	if (num <= 1)
	{
		return false;
	}

	if (num == 2) {
		return true;
	}

	if (num % 2 == 0)
	{
		return false;
	}

	for (int i = 3; i <= sqrt(num); i += 2) {
		if (num % i == 0)
		{
			return false;
		}
	}

	return true;
}

