#pragma once

class FoodBase
{
protected:
	static int total;

public: 
	FoodBase();
	virtual ~FoodBase() { ; }
	static int getTotal();

	virtual void printDetails() = 0;
	virtual void printMainIngredients() = 0;
};