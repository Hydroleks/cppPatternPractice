#pragma once
#include "RestaurantBase.h"

class BobsBurgers : public RestaurantBase
{
public:
	BobsBurgers();
	virtual ~BobsBurgers();

	virtual std::unique_ptr<FoodBase> createFood(int itemChoice);
	virtual void printMenu() const;
};