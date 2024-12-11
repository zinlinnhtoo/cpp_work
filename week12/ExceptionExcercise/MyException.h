#ifndef _MYEXCEPTION_H
#define _MYEXCEPTION_H

#include "String.h"

class MyException
{
protected:
	String message;

public:
	MyException(const String& e);
	String getMessage() const;
};

#endif // !_MYEXCEPTION_H



