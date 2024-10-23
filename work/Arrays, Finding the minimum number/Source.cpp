#include <iostream>
using namespace std;

int main()
{
	int A[10] = { 8,4,12,37,36,25,-2,10,15,25 };
	int min = A[0];
	int i, n=10;
	for (i = 0; i < 10; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
		}
	}
	cout << "Minimum number is " << min << endl;
	return 0;
}