#include "stdafx.h"
#include "BobsBurgers.h"
#include <iostream>
#include "BeefBurger.h"
#include "ChickenBurger.h"
#include "VeganBurger.h"

BobsBurgers::BobsBurgers()
	: RestaurantBase()
{
	std::cout << "Bob's Burgers open for business." << std::endl;
}

BobsBurgers::~BobsBurgers()
{
	std::cout << "Bob made " << FoodBase::getTotal() << " burgers during his carreer." << std::endl;
	std::cout << "Bob's Burgers shut down. :(" << std::endl;
}

std::unique_ptr<FoodBase> BobsBurgers::createFood(int itemChoice)
{
	switch (itemChoice)
	{
	case 1:
		return std::unique_ptr<FoodBase>(new BeefBurger());
		break;
	case 2:
		return std::unique_ptr<FoodBase>(new ChickenBurger());
		break;
	case 3:
		return std::unique_ptr<FoodBase>(new VeganBurger());
		break;
	default:
		std::cout << "Invalid input. Please check the Menu and try again." << std::endl;
		break;
	}

	return nullptr;
}

void BobsBurgers::printMenu() const
{
	std::cout << "********BURGER MENU********\n"
		<< "* 1: Beef Burger\n"
		<< "* 2: Chicken Burger\n"
		<< "* 3: Vegan Burgger\n"
		<< "*************************" << std::endl;
}

