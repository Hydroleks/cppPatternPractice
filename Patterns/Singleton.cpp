#include "stdafx.h"
#include "Singleton.h"
#include <iostream>

Singleton* Singleton::_instance = 0;

Singleton* Singleton::getInstance()
{
	if (_instance == nullptr)
		_instance = new Singleton();

	return _instance;
}

void Singleton::doSomething()
{
	std::cout << "This is a singleton call." << std::endl;
}
