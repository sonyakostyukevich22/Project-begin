#include <iostream>
#include <cmath>
//27

int main()
{
	double A;
	std::cout << "A = ";
	std::cin >> A;
	double A2;
	double A4;
	double A8;
	double m;
	m = A * A;
	A2 = m;
	std::cout << A2 << std::endl;
	A4 = A2 * m;
	std::cout << A4 << std::endl;
	A8 = A4 * m * m;
	std::cout << A8 << std::endl;
	system("pause");
	return 0;
}