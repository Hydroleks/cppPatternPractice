#pragma once
#include "Burger.h"

class BurgerFactory
{
public:
	BurgerFactory();
	~BurgerFactory();

	Burger* createBurger(int itemChoice);
	void printMenu();
};