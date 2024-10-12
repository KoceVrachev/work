#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter age " << endl;
	cin >> age;
	if (age >= 1 && age <= 50)
	{
		cout << "Young person " << endl;
	}
	else
	{
		cout << "Not young person " << endl;
	}
	return 0;
}