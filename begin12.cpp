#include <iostream>
#include <cmath>
//13

int main()
{
	double R1, R2, S1, S2, S3;
	std::cout << "R1 = ";
	std::cin >> R1;
	std::cout << "R2 = ";
	std::cin >> R2;
	S1 = 3.14 * pow(R1, 2);
	std::cout << S1 << std::endl;
	S2 = 3.14 * pow(R2, 2);
	std::cout << S2 << std::endl;
	S3 = S1 - S2;
	std::cout << S3 << std::endl;
	system("pause");
	return 0;
}