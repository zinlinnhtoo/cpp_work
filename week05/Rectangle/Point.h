#ifndef _POINT_H_
#define _POINT_H_

class Point {

private: 
	int x, y;


public:

	Point(int xPos = 0, int yPos = 0);
	~Point();

	int GetX(void) const;
	int GetY(void) const;

	bool SetX(int xPos);
	bool SetY(int yPos);

};

inline Point::Point(int xPos, int yPos) {
	x = xPos;
	y = yPos;
}

#endif // !_POINTS_H_

