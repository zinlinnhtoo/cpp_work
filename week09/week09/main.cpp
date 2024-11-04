#include <iostream>

using std::cout;
using std::endl;

#include "String.h"

int main() {

	// step 1
	String s1;
	String s2("hello");

	// step 2
	cout << "s1: " << s1 << endl;
	cout << "s1's length: " << s1.length() << endl;
	cout << "s2: " << s2 << endl;

	// step 3
	s1 = s2;
	cout << "s1: " << s1 << endl;

	// step 4
	String s3 = s2;
	cout << "s3: " << s3 << endl;

	// step 5
	String hello("Hello, ");
	String world("world!");
	String s4 = hello + world;
	cout << "s4: " << s4 << endl;

	// step 6
	String s5("abcd");
	String s6("abcd");
	if (s5 == s6)
	{
		cout << "This two string are equal" << endl;
	}
	else {
		cout << "This two string are different" << endl;
	}

	if (s5 == "Hello")
	{
		cout << "This two string are equal" << endl;
	}
	else {
		cout << "This two string are different" << endl;
	}

	// step 7
	String s7("ABCD");
	cout << s7[1] << endl;
	s7[0] = 'H';
	cout << s7 << endl;

	return 0;
}