#include "stdafx.h"
#include "PizzaBase.h"
#include <iostream>

int PizzaBase::totalPizzas = 0;

PizzaBase::PizzaBase()
	: name("Uninitialized")
	, price (0.0f)
{
	++totalPizzas;
}

PizzaBase::~PizzaBase()
{
	std::cout << "Pizza base destructor called." << std::endl;
}

PizzaBase::PizzaBase(std::string nameSet, float priceSet)
	: name(nameSet)
	, price(priceSet)
{
	++totalPizzas;
}

void PizzaBase::printDetails()
{
	std::cout << "Pizza name: " << name << ", Price: " << price << std::endl;
}

int PizzaBase::getTotal()
{
	return totalPizzas;
}
