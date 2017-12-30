#pragma once
#include "Burger.h"

class BeefBurger : public Burger
{
public:
	BeefBurger();
	virtual ~BeefBurger();
	virtual void printBurgerIngredients();
};