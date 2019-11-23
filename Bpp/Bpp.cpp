#include <iostream>
#include <cstdlib>
#include "Time.h"
using namespace std;

int main()
{
	Time one(34, 54, 55), two(46, 95, 54), add(one + two);

	cout << "Time One: " << one; 
	cout << "Time Two: " << two; 
	cout << "Time One + Time Two: " << add;
	cout << endl;

	if (one > two)
	{
		cout << "One is greater than two !" << endl;
	}
	else if(one == two)
	{
		cout << "One equals Two";
	}
	else
	{
		cout << "Two is greater that One" << endl;
	}

	system("pause");
	return 0;
}
