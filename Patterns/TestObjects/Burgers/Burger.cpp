#include "stdafx.h"
#include "Burger.h"
#include <iostream>

Burger::Burger()
	: FoodBase()
	, name("Uninitialized")
	, price(0.0f)
{
}

Burger::~Burger()
{
	std::cout << "Burger Base destroyed." << std::endl;
}

Burger::Burger(std::string nameSet, float priceSet)
	: name(nameSet)
	, price(priceSet)
{
}

void Burger::printDetails()
{
	std::cout << "Burger name: " << name << ", Price: " << price << std::endl;
}




