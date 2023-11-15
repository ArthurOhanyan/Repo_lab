#include <iostream>

int fact (int);

int main ()
{
	int num = 0; 
	std::cin >> num;
	std::cout << fact (num) << std::endl;
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
