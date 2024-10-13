#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, d, R1, R2, R;
	cout << "Enter a,b and c " << endl;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d == 0)
	{
		cout << "roots are real and equal " << endl;
		cout << -b / (2 * a) << endl;
	}
	else if (d > 0)
	{
		cout << "roots are not even and unequal " << endl;
		cout << (-b + sqrt(d)) / (2 * a) << endl;
		cout << (-b - sqrt(d)) / (2 * a) << endl;
	}
	else
	{
		cout << "Roots are imaginary " << endl;
	}
	return 0;
}
