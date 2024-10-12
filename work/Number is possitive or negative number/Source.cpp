#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number";
	cin >> n;
	if (n > 0)
	{
		cout << "The number is postive " << n << endl;
	}
	else
	{
		cout << "The number is negative " << n << endl;
	}
	return 0;
}