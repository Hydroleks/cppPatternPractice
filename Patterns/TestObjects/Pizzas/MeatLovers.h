#pragma once

#include "PizzaBase.h"

class MeatLovers : public PizzaBase
{
public:
	MeatLovers();
	virtual ~MeatLovers();

	virtual void printMainIngredients();
};