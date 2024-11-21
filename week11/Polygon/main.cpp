#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"

using namespace std;

int main() {
	Polygon* shapes[3];

	shapes[0] = new Rectangle(10, 20);
	shapes[1] = new Square(15);
	shapes[2] = new Triangle(10, 25);

	for (int i = 0; i < 3; i++) {
		shapes[i]->ShowInfo();
		cout << "Area: " << shapes[i]->GetArea() << endl;

		Rectangle* rect;
		rect = dynamic_cast<Rectangle*>(shapes[i]);

		if (rect != NULL)
		{
			if (rect->IsSquare())
			{
				cout << "This rectangle is square" << endl;
			}
		}
		else {
			
		}
		cout << endl;

	}

	for (int i = 0; i < 3; i++)
	{
		delete shapes[i];
	}

	return 0;
}