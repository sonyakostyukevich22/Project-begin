#include <iostream>
#include <cmath>
//18

int main()
{
	double A, B, C;
	std::cout << "A = ";
	std::cin >> A;
	std::cout << "B = ";
	std::cin >> B;
	std::cout << "C = ";
	std::cin >> C;
	double AC = abs(A - C);
	std::cout << AC << std::endl;
	double BC = abs(B - C);
	std::cout << BC << std::endl;
	std::cout << AC * BC << std::endl;
	system("pause");
	return 0;
}