#include "tv.h"
#include <iostream>

TV::TV()
{
	volume = 0;
	channel = 0;
}

TV::~TV()
{
}

int TV::maxVolume()
{
	return volume += 5;
}

int TV::minVolume()
{
	return volume -= 5;
}

int TV::nextChannel()
{
	return channel += 0.5;
}

int TV::prevChannel()
{
	return channel -= 0.5;
}
