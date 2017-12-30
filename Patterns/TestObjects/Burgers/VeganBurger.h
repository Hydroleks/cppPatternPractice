#pragma once
#include "Burger.h"

class VeganBurger : public Burger
{
public:
	VeganBurger();
	virtual ~VeganBurger();
	virtual void printBurgerIngredients();
};