// Listing4.1.cpp : Declearing an array of integers and accessing its elements

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int myNumbers[5] = { 34,56,-21,5002,365 };
	cout << "first element in index 0: " << myNumbers[0] << endl;
	cout << "secon element in index 0: " << myNumbers[1] << endl;
    return 0;
}

