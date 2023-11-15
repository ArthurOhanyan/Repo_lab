#include <iostream>

int fact (int);
int fib (int);

int main ()
{
	int num = 0; 
	std::cin >> num;
	std::cout << fact (num) << std::endl;
	std::cout << fib (num) << std::endl;
}
int fib (int num)
{
	if (num <= 2){
		
		return num;
	}

	return fib (num - 1) + fib (num - 2);
}

int fact (int num)
{
	int sum = 1;
	int tmp = num;
	while(num){
		
		sum *= num;
		--num;
	}
	return sum;
		
}
