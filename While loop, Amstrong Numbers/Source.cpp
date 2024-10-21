#include <iostream>
using namespace std;

int main()
{
	int n, r, sum = 0, m;
	cout << "Enter n " << endl;
	cin >> n;
	m = n;
	while (n > 0)
	{
		r = n % 10;
		n = n / 10;
		sum = sum + r * r * r;
	}
	if (sum == m)
		cout << "This is an Amstrong number " << endl;
	else
		cout << "This is not an Amstrong number " << endl;
	return 0;
}