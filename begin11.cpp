#include <iostream>
#include <cmath>
//12

int main()
{
	double a, b, c, P;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));
	std::cout << c << std::endl;
	P = a + b + c;
	std::cout << P << std::endl;
	system("pause");
	return 0;
}