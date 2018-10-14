#include <iostream>
#include <cmath>
//16

int main()
{
	double x1, x2, t;
	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "x2 = ";
	std::cin >> x2;
	t = abs(x2 - x1);
	std::cout << t << std::endl;
	system("pause");
	return 0;
}