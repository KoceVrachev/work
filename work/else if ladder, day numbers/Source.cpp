#include <iostream>
using namespace std;

int main()

{
	int day;
	cout << "Enter day number " << endl;
	cin >> day;
	if (day == 1)
	{
		cout << "Monday " << endl;
	}
	else if (day == 2)
	{
		cout << "Tuesday " << endl;
	}
	else if (day == 3)
	{
		cout << "Wensday " << endl;
	}
	else
	{
		cout << "Invalid number " << endl;
	}
	return 0;
}
