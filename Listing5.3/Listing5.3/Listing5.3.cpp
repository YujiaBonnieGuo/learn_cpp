// Listing5.3.cpp : demonstrating equality and relational operators

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "enter two integers: " << endl;
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	bool isEqual = (num1 == num2);
	cout << "result of equality: " << isEqual << endl;

	bool isUnequal = (num1 != num2);
	cout << "result if inequality: " << isUnequal << endl;


    return 0;
}

