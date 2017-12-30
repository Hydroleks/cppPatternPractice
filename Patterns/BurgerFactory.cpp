#include "stdafx.h"
#include "BurgerFactory.h"
#include <iostream>
#include "BeefBurger.h"
#include "ChickenBurger.h"
#include "VeganBurger.h"

BurgerFactory::BurgerFactory()
{
	std::cout << "Burger Factory open for business!" << std::endl;
}

BurgerFactory::~BurgerFactory()
{
	std::cout << "The workers at this factory happily made " << Burger::getTotal() << " burgers." << std::endl;
	std::cout << "Burger Factory shut down! You monster!" << std::endl;
}

std::unique_ptr<Burger> BurgerFactory::createBurger(int itemChoice)
{
	switch (itemChoice)
	{
	case 1:
		return std::unique_ptr<BeefBurger>(new BeefBurger());
		break;
	case 2:
		return std::unique_ptr<ChickenBurger>(new ChickenBurger());
		break;
	case 3:
		return std::unique_ptr<VeganBurger>(new VeganBurger());
		break;
	default:
		std::cout << "Invalid input. Please check the Menu and try again." << std::endl;
		break;
	}

	return nullptr;
}

void BurgerFactory::printMenu()
{
	std::cout << "********BURGER MENU********\n"
		<< "* 1: Beef Burger\n"
		<< "* 2: Chicken Burger\n"
		<< "* 3: Vegan Burgger\n"
		<< "*************************" << std::endl;
}
