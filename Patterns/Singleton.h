#pragma once

class Singleton
{
private:
	Singleton() {}; // No default constructor access allowed.
	Singleton(Singleton const&) {}; // No copy constructor access allowed.
	Singleton& operator=(Singleton const&) {}; // No copy assignment access allowed.
	static Singleton* _instance;
	
public:
	static Singleton* getInstance();
	void doSomething();
};