#pragma once
#include "RestaurantBase.h"

class PestosPizzas : public RestaurantBase
{
public:
	PestosPizzas();
	virtual ~PestosPizzas();

	virtual std::unique_ptr<FoodBase> createFood(int itemChoice);
	virtual void printMenu();
};