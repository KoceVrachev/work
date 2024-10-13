#include <iostream>
using namespace std;

int main()

{
	float Amount, newPrice;
	cout << "Enter an amount " << endl;
	cin >> Amount;
	if (Amount >= 5000)
	{
		cout << "You are recieving 20% discount " << endl;
		newPrice = ((Amount * 20.0f) / 100);
		cout << "Your new price is " << Amount-newPrice << endl;
	}
	else if (Amount >= 2000 && Amount < 5000)
	{
		cout << "You are recieving 10% discount " << endl;
		newPrice = ((Amount * 10.0f) / 100);
		cout << "Your new price is " << Amount - newPrice << endl;
	}
	else if (Amount < 2000)
	{
		cout << "You are recieving 10% discount " << endl;
		newPrice = ((Amount * 5.0f) / 100);
		cout << "Your new price is " << Amount - newPrice << endl;
	}
	return 0;
}