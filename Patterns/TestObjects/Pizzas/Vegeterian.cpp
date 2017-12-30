#include "stdafx.h"
#include "Vegeterian.h"
#include <iostream>

Vegeterian::Vegeterian()
	: PizzaBase("Vegeterian", 9.95f)
{
}

Vegeterian::~Vegeterian()
{
	std::cout << "Vegeterian pizza destroyed." << std::endl;
}

void Vegeterian::printMainIngredients()
{
	std::cout << "Vegitables." << std::endl;
}