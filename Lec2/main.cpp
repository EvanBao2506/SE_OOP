#include <iostream>

using namespace std;

int main()
{
	double myarray[3][3] = { {3.25 , 3.1, 52.0001}, {5.2 , 6.8892 , 6.225 },{1.0 , 885.2 , 52.554444444 } };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << myarray[i][j];
		}
	}

	char name[20] = {};
	float age = 0;

	cout << "\nEnter your name and age : ";
	cin >> name >> age;

	cout << "\nName of the user is " << name;
	cout << " And he is " << age << " years old\n";

	return 0;
}