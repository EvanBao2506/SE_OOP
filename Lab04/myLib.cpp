#include "myLib.h"

void IO::Input(int& value)
{
	cout << "Enter a integer number: ";
	cin >> value;
}

void IO::Output(const int value)
{
	cout << "Value is " << value << endl;
}
