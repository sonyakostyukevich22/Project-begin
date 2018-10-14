#include <iostream>
#include <cmath>
//23

int main()
{
	double A = 79;
	double B = 46;
	double C = 23;
	double m;
	m = A;
	A = B;
	B = C;
	C = m;
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << C << std::endl;
	system("pause");
	return 0;
}