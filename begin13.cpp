#include <iostream>
#include <cmath>
//14

int main()
{
	double L, R, S;
	std::cout << "L = ";
	std::cin >> L;
	R = L / (2 * 3.14);
	std::cout << R << std::endl;
	S = 3.14 * pow(R,2);
	std::cout << S << std::endl;
	system("pause");
	return 0;
}