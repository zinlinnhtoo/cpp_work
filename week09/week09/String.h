#ifndef _STRING_H
#define _STRING_H

#include <iostream>
using std::ostream;


class String {
	int m_nLen;
	char* m_pStr;

public:
	String();
	String(const char*);
	String(const String& other);
	~String();
	
	int length() const;
	friend ostream& operator<<(ostream& os, const String& str);

	String& operator=(const String& other);
	String operator+(const String& other) const;
	bool operator==(const String& other) const;
	char& operator[](int index);
};

#endif // !_STRING_H
