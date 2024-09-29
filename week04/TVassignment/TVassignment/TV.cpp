#include <iostream>
#include "TV.h"

using std::cout;
using std::endl;


void TV::pushPower() {
	status = !status;
}

void TV::channelUp() {
	if (status) {
		if (channel < 5) {
			channel++;
		}
		else {
			channel = 1;
		}
		cout << "Current channel is " << channel << endl;
	}
	else {
		cout << "TV is now OFF." << endl;
		cout << "You need to turn on TV first." << endl;
	}
}

void TV::channelDown() {
	if (status) {
		if (channel > 1) {
			channel--;
		}
		else {
			channel = 5;
		}
		cout << "Current channel is " << channel << endl;
	}
	else {
		cout << "TV is now OFF." << endl;
		cout << "You need to turn on TV first." << endl;
	}
}

void TV::volumeUp() {
	if (status) {
		if (volume < 10) {
			volume++;
		}
		cout << "Current Volume is " << volume << endl;
	}
	else {
		cout << "TV is now OFF." << endl;
		cout << "You need to turn on TV first." << endl;
	}
}

void TV::volumeDown() {
	if (status) {
		if (volume > 1) {
			volume--;
		}
		cout << "Current Volume is " << volume << endl;
	}
	else {
		cout << "TV is now OFF." << endl;
		cout << "You need to turn on TV first." << endl;
	}
}

void TV::showTvState() {
	if (status) {
		cout << "TV is now ON." << endl;
		cout << "Current channel is " << channel << endl;
		cout << "Current volume is " << volume << endl;
	}
	else {
		cout << "TV is now OFF." << endl;
		cout << "You need to turn on TV first." << endl;
	}
}