#include <iostream>
#include <cmath>
//20

int main()
{
	double x1, x2, y1, y2, t;
	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y1 = ";
	std::cin >> y1;
	std::cout << "y2 = ";
	std::cin >> y2;
	t = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	std::cout << t << std::endl;
	system("pause");
	return 0;
}