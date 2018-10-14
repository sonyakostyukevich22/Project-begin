#include <iostream>
#include <cmath>
//6

int main()
{
	double a, b, c, V, S;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;
	V = a * b * c;
	std::cout << V << std::endl;
	S = 2*(a * b + b * c + a * c);
	std::cout << S << std::endl;
	system("pause");
	return 0;
}
