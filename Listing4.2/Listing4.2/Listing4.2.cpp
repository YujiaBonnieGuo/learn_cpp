// Listing4.2.cpp : Assigning Value to elements in an array
//

#include "stdafx.h"
#include<iostream>
using namespace std;

constexpr int Square(int number) { return number * number; }
int main()
{
	const int ARRAY_LENGTH = 5;
	int mynumbers[ARRAY_LENGTH] = { 5,10,0,-101,20 };
	int morenumbers[Square(ARRAY_LENGTH)] = {0};
	cout << "enter index of the element to be changed: ";
	int elementIndex = 0;
	cin >> elementIndex;

	cout << "enter new value: ";
	int newValue = 0;
	cin >> newValue;
	mynumbers[elementIndex] = newValue;
	morenumbers[elementIndex] = newValue;
	cout << "element " << elementIndex << " in array mynumbers is: ";
	cout << mynumbers[elementIndex] << endl;

	cout << "element " << elementIndex << " in array morenumberssss is: ";
	cout << morenumbers[elementIndex+20] << endl;


    return 0;
}

