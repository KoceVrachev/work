#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float Radius;
	float Area;
	cout << "Give Radius " << endl;
	cin >> Radius;
	Area = 3.141592653589793238462643383279502884197 * (Radius * Radius);
	cout << "The area is " << Area << endl;
	return 0;

}