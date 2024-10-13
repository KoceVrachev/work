#include <iostream>
using namespace std;

int main()

{
	int M1, M2, M3, Total;
	float Avg;
	cout << "Enter marks of 3 subjects " << endl;
	cin >> M1 >> M2 >> M3;
	Total = M1 + M2 + M3;
	Avg = Total / 3.0f;
	if (Avg >= 60)
	{
		cout << "A " << endl;
	}
	else if (Avg >= 35 && Avg < 60)
	{
		cout << "B " << endl;
	}
	else
	{
		cout << "C" << endl;
	}
	return 0;
}