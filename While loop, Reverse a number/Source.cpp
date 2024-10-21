#include <iostream>
using namespace std;

int main()
{
	int r, n, rev = 0, m;
	cout << "Enter n " << endl;
	cin >> n;
	m = n;
	while (n > 0)
	{
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
	}
	cout << "The reverse number is " << rev << endl;
	return 0;
}