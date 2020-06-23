#ifndef __REMOTE_H_
#define __REMOTE_H_
#include <string>

class Remote
{
public:
	Remote();
	~Remote();

	bool GetPover();
	void SetPover(bool onOff);

	char GetOperation();
	void SetOperation(char operation);

private:
	bool onOff;
	char operation;
};

#endif


