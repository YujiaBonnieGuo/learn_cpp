// listing7.21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void DisplayNumbers(vector<int>& dynArray)
{
	for_each (dynArray.begin(), dynArray.end(), [] (int Element) {cout << Element << " "; } );
	cout << endl;
}
int main()
{
	vector<int>myNums;
	myNums.push_back(501);
	myNums.push_back(-1);
	myNums.push_back(25);
	myNums.push_back(-35);
	DisplayNumbers(myNums);
	cout << "sorting them in descending order" << endl;
	std::sort (myNums.begin(), myNums.end(), [] (int Num1, int Num2) { return(Num2 < Num1); });
	DisplayNumbers(myNums);
    return 0;
}

