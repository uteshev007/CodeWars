#include <iostream>
#include <string>
using namespace std;


/*
We need a function that can transform a number (integer) into a string.
*/

string number_to_string(int num)
{
	string number = to_string(num);
	cout << number << endl;
	return number;
}

int main()
{
	number_to_string(5 + 1);
	number_to_string(55);
	number_to_string(100);
}