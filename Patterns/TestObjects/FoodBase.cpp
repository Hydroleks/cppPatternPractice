#include "stdafx.h"
#include "FoodBase.h"

int FoodBase::total = 0;

FoodBase::FoodBase()
{
	++total;
}

int FoodBase::getTotal()
{
	return total;
}
