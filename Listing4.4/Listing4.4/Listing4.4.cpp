// Listing4.4.cpp : Creating a dynamic Array of Integers and Inserting Values Dynamically

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> dynArry(3);//dynamic array of int
	dynArry[0] = 365;
	dynArry[1] =-412 ;
	dynArry[2] = 789;

	cout << "number of integers in Array: " << dynArry.size() << endl;
	cout << "enter another element to insert" << endl;
	int newValue = 0;
	cin >> newValue;
	dynArry.push_back(newValue);

	cout << "number of integers in Array: " << dynArry.size() << endl;
	cout << "last element in array: ";
	cout << dynArry[dynArry.size() - 1] << endl;

    return 0;
}

