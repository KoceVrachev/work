#include <iostream>
using namespace std;

int main()
{
	int A[7] = { 4,8,3,12,5,6,15 };
	int n = 7, max=A[0];
	for (int i = 1; i < 7; i++)
	{
		if (A[i]>max)
		{
			max = A[i];
		}
	}
	cout << "The maximum number is " << max << endl;
	return 0;
}