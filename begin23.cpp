#include <iostream>
#include <cmath>
//24

int main()
{
	double A = 13;
	double B = 51;
	double C = 80;
	double m;
	m = A;
	A = C;
	C = B;
	B = m;
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << C << std::endl;
	system("pause");
	return 0;
}