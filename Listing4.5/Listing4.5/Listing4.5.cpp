// Listing4.5.cpp : Analyzing the Null-Terminator in a C-style String

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	char sayHello[] = { 'h','e','l','l','o',' ','w','o','r','l','d','\0' };
	cout << sayHello << endl;
	cout << "size of array: " << sizeof(sayHello) << endl;

	cout << "replacing space with null " << endl;
	sayHello[5] = '\0';
	cout << sayHello << endl;
	cout << "size of array: " << sizeof(sayHello) << endl;
    return 0;
}

