#pragma once
#include <string>

class Burger
{
protected:
	static int total;
	std::string name;
	float price;

public:
	Burger();
	virtual ~Burger();

	Burger(std::string nameSet, float priceSet);

	void printDetails();
	virtual void printBurgerIngredients() = 0;
	static int getTotal();
};