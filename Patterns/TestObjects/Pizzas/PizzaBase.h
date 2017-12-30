#pragma once
#include <string>

class PizzaBase
{
private:
	static int totalPizzas;

protected:
	std::string name;
	float price;

public:
	PizzaBase();
	virtual ~PizzaBase();
	PizzaBase(std::string nameSet, float priceSet);

	void printDetails();
	virtual void printMainIngredients() = 0;
	static int getTotal();
};