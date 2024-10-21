#include <iostream>
using namespace std;

int main()
{
	int i = 1, n, sum = 0;
	cout << "Enter n " << endl;
	cin >> n;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	cout << "The result of natural number is " << sum << endl;
	return 0;
}

