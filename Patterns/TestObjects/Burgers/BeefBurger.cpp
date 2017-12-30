#include "stdafx.h"
#include "BeefBurger.h"
#include <iostream>

BeefBurger::BeefBurger()
	: Burger("Beef Burger", 7.95)
{
}

BeefBurger::~BeefBurger()
{
	std::cout << "Beef Burger destroctor called." << std::endl;
}

void BeefBurger::printBurgerIngredients()
{
	std::cout << "Main ingredient is beef." << std::endl;
}
