// factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// nFact.cpp : Recursive solution for N!
//


#include <iostream>
using namespace std;

int NFact(int n);

int main()
{
	int n;

	while (true)
	{
		cout << "input a postive int: ";
		cin >> n;
		cout << n << "! = " << NFact(n) << endl;
	}
	return 0;
}

int NFact(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if ((n == 1) || (n == 0))
	{
		return 1;
	}
	else
	{
		return n * NFact(n - 1);
	}
}

