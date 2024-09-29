#ifndef _TV_H_
#define _TV_H_

class TV {
public:
	bool status = false;
	int channel = 1;
	int volume = 5;

	void pushPower();
	void channelUp();
	void channelDown();
	void volumeUp();
	void volumeDown();
	void showTvState();


};

#endif // _TV_H_
