#include <iostream>
using namespace std;

int main()
{
	int i, n, sum = 0;
	cout << "Enter n " << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		sum+=i;
	}
	cout << "The sum of natural number is " << sum << endl;
	return 0;
}