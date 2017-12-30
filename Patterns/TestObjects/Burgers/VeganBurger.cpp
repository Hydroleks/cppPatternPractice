#include "stdafx.h"
#include "VeganBurger.h"
#include <iostream>

VeganBurger::VeganBurger()
	: Burger("Vegan Burger", 5.75f)
{
}

VeganBurger::~VeganBurger()
{
	std::cout << "Vegan Burger destructor is called" << std::endl;
}

void VeganBurger::printBurgerIngredients()
{
	std::cout << "Main ingredient is vegetables." << std::endl;
}


