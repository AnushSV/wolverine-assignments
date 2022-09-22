#include <iostream>

int main()
{
	int num1;
	int num2;
	int max = 0;
	
	std::cin >> num1;
	std::cin >> num2;
	
	if(num1 > num2)
	{
		max = num1;
	}
	else
	{
		max = num2;
	}

	std::cout << max << std::endl;

	return 0;
}
