#include <iostream>
#include <map>

int sum_dig(int, int);
int sub_dig(int, int);
int div_dig(int, int);
int mul_dig(int, int);

int main()
{
	int num1;
	int num2;
	char sign;
	
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> sign;
	
	std::map <char, int(*)(int, int)> calc;
	
	calc['+'] = sum_dig;
	calc['-'] = sub_dig;
	calc['/'] = div_dig;
	calc['*'] = mul_dig;

	std::cout << calc[sign](num1, num2) << std::endl;
	
	return 0;

}

int sum_dig(int num1, int num2)
{
	return num1 + num2;
}

int sub_dig(int num1, int num2)
{
	return num1 - num2;
}

int div_dig(int num1, int num2)
{
	return num1 / num2;
}

int mul_dig(int num1, int num2)
{
	return num1 * num2;
}
