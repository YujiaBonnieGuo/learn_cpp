// Listing5.1.cpp : demonstrate arithmetic operators on integers input by the user
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "enter two integers: " << endl;
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;
	cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	cout << num1 << "x" << num2 << "=" << num1 * num2 << endl;
	cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
	cout << num1 << "%" << num2 << "=" << num1 % num2 << endl;

    return 0;
}

