#include <iostream>
#include <cstdlib>
#include "Time.h"
using namespace std;

int main()
{
	Time one(0, 12), two(0, 11), add(one + two);
	Time Three(0,10);

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
