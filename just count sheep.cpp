#include <iostream>
#include <string>

using namespace std;

string countSheep(int number)
{
	if (number == 0)
		return " ";
	string result;
	for (int i = 1; i <= number; i++)
	{
		result += to_string(i) + (" sheep..");
	}
	cout << result;
	return result;


}

int main()
{
	countSheep(5);
}