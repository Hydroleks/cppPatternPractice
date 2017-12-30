#include "stdafx.h"
#include "PeriPeriChicken.h"
#include <iostream>

PeriPeriChicken::PeriPeriChicken()
	: PizzaBase("Peri Peri Chicken", 11.80f)
{
}

PeriPeriChicken::~PeriPeriChicken()
{
	std::cout << "Peri Peri Chicken pizza destroyed." << std::endl;
}

void PeriPeriChicken::printMainIngredients()
{
	std::cout << "Chicken and peri peri souce." << std::endl;
}

