#include <iostream>
#include <string>
using namespace std;

int ReadNumberPositive(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}
bool IsPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}

int main()
{

	if (IsPalindromeNumber((ReadNumberPositive("enter Number"))))
		cout << "\nYes , it is a Palindrome Number. \n";
	else
		cout << "\nNo , it is a Palindrome Number. \n";

	return 0;
}