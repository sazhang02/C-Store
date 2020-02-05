//Samantha Zhang
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string name[] = {"Bread", "Eggs", "Ham" , "Turkey", "Milk", "Jam", "Macoroni", "Pie" , "Bagel" , "Chicken" };
	int quantity[] = {8,60,9,20,31,22,15,10,14,21};
	double price[] = {2.50,5.00,10.50,10.50,4.25,3.99,8.00,7.50,4.99,15.50};
	int i;
	int dummy;
	double total = 0;
	int a;
	int item;
	int q;
	int inventory;
	double nprice;
	


	do
	{	
		cout << "Choose a function:" << endl << "1. List of Items" << endl << "2. Add to Cart" << endl << "3. Add Inventory" << endl << "4. Change Price" << endl << "5. Current Total" << endl << "6. Exit" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			for (i = 0; i < 10; i++)
			{
				cout << i + 1 << ". " << name[i] << endl << "Cost: $" << price[i] << endl << "Quantity: " << quantity[i] <<endl;

			}
			break;

		case 2:
			cout << "Which item would you like to purchase?" << endl;
			for (i = 0; i < 10; i++)
			{
				cout << i + 1 << ". " << name[i] << endl << "Cost: $" << price[i] << endl << "Quantity: " << quantity[i] << endl;

			}
			cin >> item;
			cout << "How many " << name[item - 1] << " would you like to buy?" << endl;
			cin >> q;
			if (quantity[item - 1] < q)
			{
				cout << "Too many items. There's " << quantity[item-1] << " in stock" << endl;
			}
			else
			{
				total = total + (price[item - 1] * q);
				quantity[item - 1] = quantity[item - 1] - q;
				cout << "Total: $" << total << endl;
			}
			break;

		case 3:
			cout << "Which item would you like to add inventory?" << endl;
			for (i = 0; i < 10; i++)
			{
				cout << i + 1 << ". " << name[i] << endl << "Cost: $" << price[i] << endl << "Quantity: " << quantity[i] << endl;

			}

			cin >> item;

			cout << "How much would you like to add?" << endl;
			cin >> q;

			quantity[item - 1] = quantity[item - 1] + q;

			break;

		case 4:
			cout << "Which item would you like to change the price of?" << endl;
			for (i = 0; i < 10; i++)
			{
				cout << i + 1 << ". " << name[i] << endl << "Cost: $" << price[i] << endl << "Quantity: " << quantity[i] << endl;

			}

			cin >> item;
			cout << "What's the new price?" << endl;
			cin >> nprice;
			price[item - 1] = nprice;
			
			break;

		case 5:
			cout << "Total: $" << total << endl;
			break;

		case 6:
			cout << "Exiting" << endl;
			break;

		default:
			cout << "Invalid option";
			break;

		} 
	} while (a != 6);
	


	cin >> dummy;
		return 0;
}