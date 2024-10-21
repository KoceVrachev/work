#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cout << "Enter two numbers: " << endl;
	cin >> m;
	cin >> n;
	while (m != n)
	{
		if (m > n)
			m = m - n;
		else if (n > m)
			n = n - m;
	}
	cout << "The greates common divisor is "<<m<< endl;
	return 0;
}