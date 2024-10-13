#ifndef _CHILD_H_
#define _CHILD_H_

class Child {
	int marbles;

public:
	Child(int initMarbles) : marbles(initMarbles) {
		if (marbles < 0)
		{
			marbles = 0;
		}
	}

	int getMarbles() const;
	void addMarbles(int count);
	void removeMarbles(int count);
};

#endif // !_CHILD_H_

