#include "TV.h"

int main() {
	TV tv;

	tv.showTvState();
	tv.pushPower();
	tv.showTvState();

	tv.channelUp();
	tv.channelUp();
	tv.channelUp();
	tv.channelUp();
	tv.channelUp();

	tv.channelDown();
	tv.channelDown();
	tv.channelDown();
	tv.channelDown();
	tv.channelDown();

	tv.volumeUp();
	tv.volumeUp();
	tv.volumeUp();
	tv.volumeUp();
	tv.volumeUp();
	tv.volumeUp();

	tv.volumeDown();
	tv.volumeDown();
	tv.volumeDown();
	tv.volumeDown();
	tv.volumeDown();
	tv.volumeDown();
	tv.volumeDown();
	tv.volumeDown();
	tv.volumeDown();
	tv.volumeDown();

	return 0;
}