#pragma once
#include <string>
#include "FoodBase.h"

class Burger : public FoodBase
{
protected:
	std::string name;
	float price;

public:
	Burger();
	virtual ~Burger();

	Burger(std::string nameSet, float priceSet);

	void printDetails();
	virtual void printMainIngredients() = 0;
};