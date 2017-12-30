#include "stdafx.h"
#include "ChickenBurger.h"
#include <iostream>

ChickenBurger::ChickenBurger()
	: Burger("Chicken Burger", 6.85f)
{
}

ChickenBurger::~ChickenBurger()
{
	std::cout << "Chicken Burger destructor was called." << std::endl;
}

void ChickenBurger::printBurgerIngredients()
{
	std::cout << "Main ingredient is chicken." << std::endl;
}
