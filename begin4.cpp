#include <iostream>
#include <cmath>
//5

int main()
{
	double a, V, S;
	std::cout << "a = ";
	std::cin >> a;
	V = pow(a, 3);
	std::cout << V << std::endl;
	S = 6 * pow(a, 2);
	std::cout << S << std::endl;
	system("pause");
	return 0;
}
