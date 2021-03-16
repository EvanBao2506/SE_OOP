#include <iostream>

using namespace std;

void PrintString(int i)
{
	cout << "This is item " << i << endl;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		PrintString(i);
	}
	return 0;
}