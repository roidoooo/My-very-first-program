#include <iostream>
using namespace std;

int main() 
{
	cout << "Hello World!" << endl;
	cout << "I am Juanito, your personal calculator" << endl;
	cout << "Let's compute shall we?" << endl;
	cout << "Choose an operation" << endl;
	cout << "1.)Addition" << endl;
	cout << "2.)Subtraction" << endl;
	cout << "3.)Multiplication" << endl;
	cout << "4.)Division" << endl;

	int d;
	double a;
	double b, c;
	a = 0;
	b = 0;
	d = 0;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter operand to be used: ";
	cin >> d;

	
	if(d == 1) {
		c = a + b;
		cout << "The sum of the variable is: "<< c << endl;
	}

	else if (d == 2) {
		c = a - b;
		cout << "The difference of the variable is: "<< c << endl;
	}

	else if (d == 3) {
		c = a * b;
		cout << "The product of the variable is: " << c << endl;
	}
	
	else if (d == 4) {
		c = a / b;
		cout << "the quotient of the variable is: "<< c << endl;
	} 
	
	system("pause");
	return 0;
}