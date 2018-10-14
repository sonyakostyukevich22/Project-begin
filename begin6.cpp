#include <iostream>
#include <cmath>
//7

int main()
{
	double R, L, S;
	std::cout << "R = ";
	std::cin >> R;
	L = 2 * 3.14 * R;
	std::cout << L << std::endl;
	S = 3.14 * pow(R,2);
	std::cout << S << std::endl;
	system("pause");
	return 0;
}
