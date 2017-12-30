#include "stdafx.h"
#include "Burger.h"
#include <iostream>

int Burger::total = 0;

Burger::Burger()
	: name("Uninitialized")
	, price(0.0f)
{
	++total;
}

Burger::~Burger()
{
	std::cout << "Burger Base destroyed." << std::endl;
}

Burger::Burger(std::string nameSet, float priceSet)
	: name(nameSet)
	, price(priceSet)
{
	++total;
}

void Burger::printDetails()
{
	std::cout << "Burger name: " << name << ", Price: " << price << std::endl;
}

int Burger::getTotal()
{
	return total;
}



