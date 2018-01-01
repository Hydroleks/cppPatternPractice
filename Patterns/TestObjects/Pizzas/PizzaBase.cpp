#include "stdafx.h"
#include "PizzaBase.h"
#include <iostream>

PizzaBase::PizzaBase()
	: FoodBase()
	, name("Uninitialized")
	, price (0.0f)
{
}

PizzaBase::~PizzaBase()
{
	std::cout << "Pizza base destructor called." << std::endl;
}

PizzaBase::PizzaBase(std::string nameSet, float priceSet)
	: name(nameSet)
	, price(priceSet)
{
}

void PizzaBase::printDetails()
{
	std::cout << "Pizza name: " << name << ", Price: " << price << std::endl;
}