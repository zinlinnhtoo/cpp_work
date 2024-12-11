#include <iostream>
#include "ComplexList.h"
using namespace std;

int main() {
	ComplexList list;

	list.Add(1, 2);
	list.Add(3, 4);
	list.Add(5, 6);

	cout << "Complex number in the list: " << endl;
	list.Display();

	return 0;
}