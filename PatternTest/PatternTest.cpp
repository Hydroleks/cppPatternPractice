// PatternTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>			
#include "Singleton.h"

using namespace std;


int main()
{
	cout << "Hello world." << endl;

	cout << "****************Singleton*****************" << endl;

	Singleton::getInstance()->doSomething();

	cin.get();

	return 0;
}

