// Listing2.4.cpp : declearing,defining,and calling a fnction that demonstrates capabilities of std::cout
//

#include "stdafx.h"
#include<iostream>
using namespace std;
//declare a function
int DemoConsoleOutput();

int main()
{
	//invoke the function
	DemoConsoleOutput();
    return 0;
}
//define teh previous declared function
int DemoConsoleOutput()
{
	cout << "this is a simple string literal" << endl;
	cout << "writing number 5: " << 5 << endl;
	cout << "pi when approximated is 22/7= " << 22 / 7 << endl;
	return 0;
}
