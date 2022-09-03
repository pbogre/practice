#include <iostream>

int main(){
	int fib[2] = {0, 1};
	int sum = 0;

	while(fib[0] + fib[1] < 4000000){
		int f = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = f;
		if(f % 2 == 0) sum += f;
	}
	std::cout << sum;

	return 0;	
}
