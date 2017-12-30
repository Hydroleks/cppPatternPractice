#pragma once
#include "PizzaBase.h"

class Vegeterian : public PizzaBase
{
public:
	Vegeterian();
	virtual ~Vegeterian();

	virtual void printMainIngredients();
};