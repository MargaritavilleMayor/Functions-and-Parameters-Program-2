// Functions and Parameters  Program 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double get_prices(double& get_price1st, double& get_price2nd, double& get_price3rd);
double inflation(double price1st, double price2nd, double price3rd, double& inflation2, double& inflation3);
void output(double inflation2, double inflation3);

int main()
{
	double price1st{ 0 }, price2nd{ 0 }, price3rd{ 0 };
	double inflation2{ 0 }, inflation3{ 0 };

	get_prices(price1st, price2nd, price3rd);
	inflation(price1st, price2nd, price3rd, inflation2, inflation3);
	output(inflation2, inflation3);
}

double get_prices(double& get_price1st, double& get_price2nd, double& get_price3rd)
{
	cout << "What was the price of the item 2 years ago?" << endl;
	cin >> get_price1st;
	cout << "What was the price of the item 1 year ago?" << endl;
	cin >> get_price2nd;
	cout << "What is the current price of the item?" << endl;
	cin >> get_price3rd;
	return 0;
}

double inflation(double price1st, double price2nd, double price3rd, double& inflation2, double& inflation3)
{
	inflation2 = ((price2nd - price1st) / price1st) * 100;
	inflation3 = ((price3rd - price2nd) / price2nd) * 100;
	return 0;
}

void output(double inflation2, double inflation3)
{
	cout << "The inflation rate last year was " << inflation2 << "%" << endl;
	cout << "The inflation rate this year was " << inflation3 << "%" << endl;
	return;
}