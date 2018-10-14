#include <iostream>
#include <cmath>
//15

int main()
{
	double S, D, L;
	std::cout << "S = ";
	std::cin >> S;
	D = sqrt(4 * (S / 3.14));
	std::cout << D << std::endl;
	L = 3.14 * D;
	std::cout << L << std::endl;
	system("pause");
	return 0;
}