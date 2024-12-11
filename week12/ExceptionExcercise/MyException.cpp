#include "MyException.h"

MyException::MyException(const String& e): message(e) {}

String MyException::getMessage() const {
	return message;
}