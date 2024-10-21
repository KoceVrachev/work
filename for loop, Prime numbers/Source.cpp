#include <iostream>
using namespace std;

int main()
{
	int i, n, count = 0;
	cout << "Enter n " << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 2)
		cout << "This is a prime number " << endl;
	else
		cout << "This is not a prime number " << endl;
	return 0;
}