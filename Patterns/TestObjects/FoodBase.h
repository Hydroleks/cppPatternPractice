#pragma once

class FoodBase
{
protected:
	static int total;

public: 
	FoodBase();
	virtual ~FoodBase() { ; }
	static int getTotal();
};