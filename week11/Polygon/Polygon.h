#ifndef _POLYGON_H
#define _POLYGON_H
#include <string>
#include <iostream>

using namespace std;

class Polygon
{
protected:
	double width;
	double height;
	string type;

public:
	Polygon(double w, double h, const string& t);

	virtual ~Polygon();

	virtual void ShowInfo() const = 0;
	virtual double GetArea() const = 0;

};


#endif // !_POLYGON_H


