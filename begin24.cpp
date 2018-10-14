#include <iostream>
#include <cmath>
//25

int main()
{
	double x;
	std::cout << "x = ";
	std::cin >> x;
	double y;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	std::cout << y << std::endl;
	system("pause");
	return 0;
}