#pragma once

class Singleton
{
private:
	Singleton() { ; }
	Singleton(Singleton const&) = delete; // No copy constructor access allowed.
	Singleton(Singleton&&) = delete; // No copy constructor access allowed.
	Singleton& operator=(Singleton const&) = delete; // No copy assignment access allowed.
	Singleton& operator=(Singleton&&) = delete; // No move assignment access allowed.
	
public:
	static Singleton& getInstance();
	void doSomething();
};