#include <iostream>
#include <string>

char getOperator()
{
	std::cout << "Which operator would you like? (+ - * /)" << '\n';
	char op {};
	std::cin >> op;
	return op;

}
double getNumber()
{
	std::cout << '\n' << "What number would you like in the equation? " << '\n';
	double number {};
	std::cin >> number;
	return number;

}

double solve(double a, double b, char Operat0r)
{
	if (Operat0r == '+')
		return a + b;
	else
		if (Operat0r == '-')
			return a - b;
		else
			if (Operat0r == '*')
				return a * b;
			else
				if (Operat0r == '/')
					return a / b;


}

int main()
{
	std::cout << "Welcome to UI's Calculator" << '\n';

	double a { getNumber() };

	double b { getNumber() };

	char Operat0r { getOperator() };

	double answer { solve(a, b, Operat0r) };

	std::cout << "The answer is: " << answer;


	return 0;
}



// if u see this, all these programs will be pure c++ YEE HAW! until assembly comes around ;((
