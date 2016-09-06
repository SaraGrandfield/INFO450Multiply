// INFO450Multiply.cpp : Creates a Multiplication Table on the console using c++, for VCU INFO 450 
// Sara Anne Grandfield 9/6/2016

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	
	cout << "Multiplication Table:" << endl;
	for (int x = 1; x < 10; x++)
	{
		if (x==1)
		{
			cout << "   ";
			for (int f = 1; f < 10; f++)
			{
				cout << f << '\t';
			}
		}
		else
		{
			cout << x << "| ";

			for (int y = 1; y < 10; y++)
			{
				cout << y*x << '\t';
			}
		}
		cout << endl;
	}
	return 0;
}

