#include "stdafx.h"
#include "PestosPizzas.h"
#include <iostream>
#include "MeatLovers.h"
#include "PeriPeriChicken.h"
#include "Vegeterian.h"

PestosPizzas::PestosPizzas()
{
	std::cout << "Pesto's Pizzeria open for business!" << std::endl;
}

PestosPizzas::~PestosPizzas()
{
	std::cout << "Jimmy made " << FoodBase::getTotal() << " pizzas during his carreer." << std::endl;
	std::cout << "Pesto's Pizzeria shut down." << std::endl;
}

std::unique_ptr<FoodBase> PestosPizzas::createFood(int itemChoice)
{
	switch (itemChoice)
	{
	case 1:
		return std::unique_ptr<FoodBase>(new MeatLovers());
		break;
	case 2:
		return std::unique_ptr<FoodBase>(new PeriPeriChicken());
		break;
	case 3:
		return std::unique_ptr<FoodBase>(new Vegeterian());
		break;
	default:
		std::cout << "Invalid input. Please check the Menu and try again." << std::endl;
		break;
	}

	return nullptr;
}

void PestosPizzas::printMenu()
{
	std::cout << "********BURGER MENU********\n"
		<< "* 1: Meat Lovers\n"
		<< "* 2: Peri Peri Chicken\n"
		<< "* 3: The Vegeterian\n"
		<< "*************************" << std::endl;
}
