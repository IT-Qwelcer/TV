#include "remote.h"

Remote::Remote()
{
	onOff = false;
	operation = '1';
}

Remote::~Remote()
{
}

bool Remote::GetPover()
{
	return onOff;
}

void Remote::SetPover(bool onOff)
{
	this->onOff = onOff;
}

char Remote::GetOperation()
{
	return operation;
}

void Remote::SetOperation(char operation)
{
	this->operation = operation;
}
