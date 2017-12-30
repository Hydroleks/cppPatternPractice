#pragma once
#include "Burger.h"
#include <memory>

class BurgerFactory
{
public:
	BurgerFactory();
	~BurgerFactory();

	std::unique_ptr<Burger> createBurger(int itemChoice);
	void printMenu();
};