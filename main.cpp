#include <iostream>

int main()
{	
	std::cout << "Enter number: ";
	unsigned long long n;
	std::cin >> n;
	unsigned long long* p = &n;
	unsigned char* c = reinterpret_cast<unsigned char*>(p);
	for(short i = 0; i < 8; i++)//вывод идёт начиная со страшего байта
	{
		std::cout << static_cast<int>(*(c + i)) << std::endl;
	}
	return 0;
}