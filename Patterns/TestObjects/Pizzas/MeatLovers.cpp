#include "stdafx.h"
#include "MeatLovers.h"
#include <iostream>

MeatLovers::MeatLovers()
	: PizzaBase("Meat Lovers", 12.50f)
{
}

MeatLovers::~MeatLovers()
{
	std::cout << "Meat lovers destroyed." << std::endl;
}

void MeatLovers::printMainIngredients()
{
	std::cout << "A mixture of meats." << std::endl;
}


