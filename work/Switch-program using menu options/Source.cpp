#include <iostream>
using namespace std;

int main()

{
	int option;
	cout << "Menu: " << endl;
	cout << "Choose your option: " << " 1. Addition " << " 2. Subtraction " << " 3. Mutiplication " << " 4. Division " << endl;
	cin >> option;
	int a, b, c;
	cout << "Choose 2 numbers " << endl;
	cin >> a >> b;
	switch (option)
	{
	case 1:c = a + b;
		break;
	case 2:c = a - b;
		break;
	case 3:c = a * b;
		break;
	case 4:c = a / b;
		break;
	}
	cout << "Resul is: " << c << endl;
	return 0;
}