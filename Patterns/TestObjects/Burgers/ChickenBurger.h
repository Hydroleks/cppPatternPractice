#pragma once
#include "Burger.h"

class ChickenBurger : public Burger
{
public:
	ChickenBurger();
	virtual ~ChickenBurger();
	virtual void printMainIngredients();
};