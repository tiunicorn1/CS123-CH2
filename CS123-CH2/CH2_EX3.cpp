// CH2_EX3.cpp : Defines the entry point for the console application.
// Tiara Dalton

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int num1;
	int num2;
	int num3;
	int average;

	num1 = 125;
	num2 = 28;
	num3 = -25;
	average = (num1 + num2 + num3) / 3;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "average = " << average << endl;

	system("pause");

    return 0;
}

