#include "stdafx.h"
#include "Singleton.h"
#include <iostream>
#include <mutex>

std::mutex mtx;

Singleton& Singleton::getInstance()
{
	static Singleton instance;
	return instance;
}

void Singleton::doSomething()
{
	std::cout << "This is a singleton call." << std::endl;
}
