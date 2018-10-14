#include <iostream>
#include <cmath>
//26

int main()
{
	double x;
	std::cout << "x = ";
	std::cin >> x;
	double y;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	std::cout << y << std::endl;
	system("pause");
	return 0;
}