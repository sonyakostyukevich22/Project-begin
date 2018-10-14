#include <iostream>
#include <cmath>
//28

int main()
{
	double A;
	std::cout << "A = ";
	std::cin >> A;
	double A2;
	double A3;
	double A5;
	double A10;
	double A15;
	double s;
	s = A;
	double m;
	m = A * A;
	A2 = m;
	std::cout << A2 << std::endl;
	A3 = A2 * s;
	std::cout << A3 << std::endl;
	A5 = A3 * m;
	std::cout << A5 << std::endl;
	A10 = A5 * A5;
	std::cout << A10 << std::endl;
	A15 = A10 * A5;
	std::cout << A15 << std::endl;
	system("pause");
	return 0;
}