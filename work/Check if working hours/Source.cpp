#include <iostream>
using namespace std;

int main()
{
	int hour;
	cout << "Enter hour " << endl;
	cin >> hour;
	if (hour >= 9 && hour <= 18)
	{
		cout << "Working time " << endl;
	}
	else
	{
		cout << "Leisure time " << endl;
	}
	return 0;
}