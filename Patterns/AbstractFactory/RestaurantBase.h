#pragma once
#include <memory>
#include "FoodBase.h"

class RestaurantBase
{
public:
	RestaurantBase() { ; } 
	virtual ~RestaurantBase() { ; }

	virtual std::unique_ptr<FoodBase> createFood(int itemChoice) = 0;
	virtual void printMenu() const = 0;
};