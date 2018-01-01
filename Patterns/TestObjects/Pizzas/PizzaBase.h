#pragma once
#include <string>
#include "FoodBase.h"

class PizzaBase : public FoodBase
{
protected:
	std::string name;
	float price;

public:
	PizzaBase();
	virtual ~PizzaBase();
	PizzaBase(std::string nameSet, float priceSet);

	virtual void printDetails();
	virtual void printMainIngredients() = 0;
};