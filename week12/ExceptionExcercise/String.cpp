	#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <cstring>
#include <iostream>

String::String() {

	m_nLen = 0;
	m_pStr = new char[m_nLen + 1];

	strcpy(m_pStr, "");
}

String::String(const char* str) {
	m_nLen = (int) strlen(str);
	m_pStr = new char[m_nLen + 1];

	strcpy(m_pStr, str);
}

String::String(const String& other) {
	m_nLen = other.m_nLen;
	m_pStr = new char[m_nLen + 1];
	strcpy(m_pStr, other.m_pStr);
}

String::~String() {
	delete[] m_pStr;
}

int String::length() const {
	return m_nLen;
}

ostream& operator<<(ostream& os, const String& str) {
	os << str.m_pStr;
	return os;
}

String& String::operator=(const String& other) {
	this->m_nLen = other.m_nLen;
	delete[] this->m_pStr;
	this->m_pStr = new char[m_nLen + 1];
	strcpy(m_pStr, other.m_pStr);

	return *this;
}

String String::operator+(const String& other) const {
	String result;

	result.m_nLen = this->m_nLen + other.m_nLen;
	result.m_pStr = new char[result.m_nLen + 1];
	
	strcpy(result.m_pStr, this->m_pStr);
	strcat(result.m_pStr, other.m_pStr);

	return result;
	
}

bool String::operator==(const String& other) const {
	if (m_nLen != other.m_nLen)
	{
		return false;
	}
	return strcmp(m_pStr, other.m_pStr) == 0;
}

char& String::operator[](int index) {
	if (index >= 0 && index < m_nLen)
	{
		return m_pStr[index];
	}
	else {
		std::cout << "Index out of bound" << std::endl;
	}
}

