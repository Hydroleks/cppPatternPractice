// PatternTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>			
#include <vector>

#include "Singleton.h"
#include "BurgerFactory.h"

using namespace std;


int main()
{
	cout << "Hello world." << endl;

	cout << "*******************Singleton*******************" << endl;

	Singleton::getInstance()->doSomething();

	cout << "****************Burger Factory*****************" << endl;

	unique_ptr<BurgerFactory> bf(new BurgerFactory());
	cout << "* 0 - Shut down the burger factory. " << endl;
	cout << "* 9 - See what the burger factory has to offer." << endl;
	cout << "***********************************************" << endl;
	cout << "Please enter choice (numbers only for now): ";

	string result;
	int i;
	vector<shared_ptr<Burger>> myBurgers;
	while (cin >> i)
	{
		cout << endl;
		if (i == 0)
		{
			bf.reset();
			break;
		}
		else if (i == 9)
		{
			bf->printMenu();
		}
		else
		{
			shared_ptr<Burger> bg = bf->createBurger(i);
			if (bg != nullptr)
			{
				myBurgers.push_back(bg);
				bg->printDetails();
				bg->printMainIngredients();
			}	
		}
		cout << "\nPlease enter choice (numbers only for now): ";
	}

	myBurgers.clear();

	cout << endl;
	system("pause");
	return 0;
}

