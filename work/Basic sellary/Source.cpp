#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float BasicSalary;
	float Allowance;
	float Deduction;
	float NetSalary;
	cout << "What is the Basic Salary " << endl;
	cout << "What is the Allowance percentage " << endl;
	cout << "What is the deduction " << endl;
	cin >> BasicSalary;
	cin >> Allowance;
	cin >> Deduction;
	NetSalary = BasicSalary + BasicSalary * Allowance / 100 - BasicSalary * Deduction / 100;
	cout << "Net salary is " << NetSalary << endl;
	return 0;
}