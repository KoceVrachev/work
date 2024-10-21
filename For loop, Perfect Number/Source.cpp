#include <iostream>
using namespace std;

int main()
{
	int i, n, sum = 0;
	cout << "Enter n " << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (2 * n == sum)
		cout << "This is a perfect number " << endl;
	else
		cout << "This is not a perfect number " << endl;
	return 0;
}