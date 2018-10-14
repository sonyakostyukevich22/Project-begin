#include <iostream>
#include <cmath>
//19

int main()
{
	double x1, x2, y1, y2, P, S;
	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y1 = ";
	std::cin >> y1;
	std::cout << "y2 = ";
	std::cin >> y2;
	P = (abs(x1 - x2) + abs(y1 - y2))* 2;
	std::cout << P << std::endl;
	S = abs(x1 - x2) * abs(y1 - y2);
	std::cout << S << std::endl;
	system("pause");
	return 0;
}