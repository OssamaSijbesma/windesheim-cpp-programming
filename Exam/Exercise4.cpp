#include <iostream>

#include "Exercise4.h"

Avatar::Avatar()
{
	state = undefined;
}

Avatar::~Avatar()
{
}


void Avatar::setState(unsigned char new_state)
{
	state = new_state;
}


void Avatar::printState() const
{
}
