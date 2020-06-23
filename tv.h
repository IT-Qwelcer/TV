#ifndef __TV_H_
#define __TV_H_

class TV
{
public:
	TV();
	~TV();

	int maxVolume();
	int minVolume();

	int nextChannel();
	int prevChannel();

private:
	float volume;
	float channel;
};

#endif


