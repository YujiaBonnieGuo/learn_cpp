// Listing2.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int input_number;
	

	cout << "enter an interger: ";
	cin >> input_number;
	cout << "enter your name: ";
	string input_name;
	cin >> input_name;
	cout << input_name << " entered " << input_number << endl;

    return 0;
}

