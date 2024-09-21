#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num);

int main(void) {
	
	int n;
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> n;

	if (isPrime(n)) {
		cout << "�Է��� ���� " << n << "���Ҽ� �Դϴ�." << endl;
	}
	else
	{
		cout << "�Է��� ���� " << n << "���Ҽ� �ƴմϴ�." << endl;
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

