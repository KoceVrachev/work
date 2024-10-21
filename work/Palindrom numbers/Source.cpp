#include <iostream>
using namespace std;

int main()
{
	int n, r, m, rev = 0;
	cout << "Enter n " << endl;
	cin >> n;
	m = n;
	while (n > 0)
	{
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
	}
	cout << "Reverse number is: " << rev << endl;

	if (m == rev)
		cout << "This is a Pelindrom number " << endl;
	else
		cout << "This is not a Pelindrom number " << endl;

	return 0;
}