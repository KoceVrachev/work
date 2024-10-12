#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number " << endl;
	cin >> n;
	if (n % 2 == 0)
	{
		cout << "The number is even " << n << endl;
	}
	else
	{
		cout << "The number is odd " << n << endl;
	}
	return 0;
}