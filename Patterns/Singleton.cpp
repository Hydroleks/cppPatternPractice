#include "stdafx.h"
#include "Singleton.h"
#include <iostream>
#include <mutex>

Singleton* Singleton::_instance = 0;
std::mutex mtx;

Singleton* Singleton::getInstance()
{
	if (_instance == nullptr)
	{
		// Lock for object creation
		mtx.lock();

		if (_instance == nullptr)
		{
			_instance = new Singleton();
		}

		// Unlock. Object should exist at this point.
		mtx.unlock();
	}

	return _instance;
}

void Singleton::doSomething()
{
	std::cout << "This is a singleton call." << std::endl;
}
