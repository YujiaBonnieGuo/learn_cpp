// Listing3.3.cpp : using global variables
//

#include "stdafx.h"
#include<iostream>
using namespace std;
//three global integers
int firstnumber = 0;
int secondnumber = 0;
int multiplicationresult = 0;
void multiplyNumbers()
{
	cout << "enter the first number: ";
	cin >> firstnumber;
	cout << "enter the second number: ";
	cin >> secondnumber;
	
	multiplicationresult = firstnumber * secondnumber;
	cout << "displaying from multiplyNumbers(): ";
	cout << firstnumber << " x " << secondnumber;
	cout << " = " << endl;
}

int main()
{
    return 0;
}

