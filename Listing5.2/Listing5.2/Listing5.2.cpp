// Listing5.2.cpp : demonstrate the difference between postifix nad prefix operators
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int startValue = 101;
	cout << "start value of integer being operated: " << startValue << endl;

	int postfixIncrement = startValue++;
	cout << "result of profix increment = " << postfixIncrement << endl;
	cout << "after postfix increment, start value= " << startValue<<"\n" << endl;

	startValue = 101;
	int pretfixIncrement = ++startValue;
	cout << "result of profix increment = " << pretfixIncrement << endl;
	cout << "after pretfix Increment , start value= " << startValue << "\n" << endl;

	startValue = 101;
	int postfixDecrement = startValue--;
	cout << "result of profix increment = " << postfixDecrement << endl;
	cout << "after pretfix Increment , start value= " << startValue << "\n" << endl;

		startValue = 101;
	int pretfixDecrement = --startValue;
	cout << "result of profix increment = " << pretfixDecrement << endl;
	cout << "after pretfix Increment , start value= " << startValue << "\n" << endl;

    return 0;
}

