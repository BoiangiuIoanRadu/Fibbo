// Fibbo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
int fibbo(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return fibbo(n - 1) + fibbo(n -2);
}
int main()
{
	int nr;
	cout << "Introduceti un numar:"; cin >> nr;
	cout << fibbo(nr);

}

