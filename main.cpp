#include "tv.h"
#include "remote.h"
#include <iostream>

int main(int argc, char** argv)
{
	Remote remote;
	TV tv;

	bool exit = true;

	const int maxVolume = 100;
	const int minVolume = 0;

	const int nextChannel = 10;
	const int prevChannel = 0;

	std::cout << " OFF! "
		<< "\n -------------------------- \n\t (ON - 1 / OFF - 0) -> ";
	int x; std::cin >> x;
	remote.SetPover(x);

	system("cls");
	if (remote.GetPover())
	{
		while (exit)
		{
			std::cout << "\n Select an operation (>, <, +, -) || (OFF - 0) -> ";
			char y; std::cin >> y;
			remote.SetOperation(y);

			system("cls");
			switch (remote.GetOperation())
			{
			case '>':
				if (tv.nextChannel() < nextChannel)
				{
					std::cout << " Channel: " << tv.nextChannel() << "/" << nextChannel << std::endl;
				}
				break;
			case '<':
				if (tv.prevChannel() > prevChannel)
				{
					std::cout << " Channel: " << tv.prevChannel() << "/" << nextChannel << std::endl;
				}
				break;
			case '+':
				if (tv.maxVolume() < maxVolume)
				{
					std::cout << " Volume: " << tv.maxVolume() << "/" << maxVolume << std::endl;
				}
				break;
			case '-':
				if (tv.minVolume() > minVolume)
				{
					std::cout << " Volume: " << tv.minVolume() << "/" << maxVolume << std::endl;
				}
				break;
			default:
				exit = false;
				std::cout << " OFF!" << std::endl;
				break;
			}
		}
	}
	else
	{
		std::cout << " OFF!" << std::endl;
	}

	return 0;
}