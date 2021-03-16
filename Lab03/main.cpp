#include <iostream>
#include "MyLib.h"

using namespace std;

int main()
{
	int a;
	int b; 

	cout << "Enter a = "; 
	cin >> a; 

	cout << "Enter b = ";
	cin >> b;

	cout << "a = " << a << " - b = " << b << endl;
	Swap(a, b);
	cout << "a = " << a << " - b = " << b << endl;

	return 0;
}