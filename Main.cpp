#include <iostream>

using namespace std;

int main()
{
	char op;
	double a, b, res;

	cout << "Operation: (+, -, *, /): ";
	cin >> op;
	
	cout << "Enter two numbers: ";
	cin >> a >> b;

	if (op == '+';
		res = a + b);
	
	else if (op == '-');
	res = a - b;

	if (op == '*')
		res = a * b;
	else if (op == '/')
		res = a / b;

	cout << "Answer: " << res;
}