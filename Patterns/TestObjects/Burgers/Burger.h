#pragma once
#include <string>

class Burger
{
private:
	static int total;

protected:
	std::string name;
	float price;

public:
	Burger();
	virtual ~Burger();

	Burger(std::string nameSet, float priceSet);

	void printDetails();
	virtual void printMainIngredients() = 0;
	static int getTotal();
};