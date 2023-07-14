#include <iostream>
#include <string>

using namespace std;

/*
Write a function which converts the input string to uppercase.
*/

string MakeUpperCase(const string& input_str)
{
	string result = input_str;
	for (char& c : result)
	{
		if (c >= 'a' && c <= 'z')
		{
			c = c - 'a' + 'A';
		}
	}
	cout << result;
	return result;
}


int main()

{
	MakeUpperCase("my name is");

}
