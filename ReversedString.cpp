#include <iostream>
#include <string>

using namespace std;

/*
Complete the solution so that it reverses the string passed into it.
*/

string reverseString(string str)
{
	// your Code is Here ... enjoy !!!
	string Rstr;

	for (int i = str.length() - 1; i >= 0; i--)
	{
		Rstr += str[i];
	}
	cout << Rstr;
	return Rstr;
}

int main()
{
	reverseString("My name is, ");
}