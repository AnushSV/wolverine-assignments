#include <iostream>

void while_num(int num, int var)
{
	
	if(num <= var)
{

	std::cout << num << std::endl;
	while_num(num+1, var);
}
}

int main()
{
	int var;
	std::cin >> var;
	int num = 0;
	 while_num(num, var);
	
		return 0;
}
