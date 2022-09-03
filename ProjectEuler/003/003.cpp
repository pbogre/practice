#include <iostream>
#include <cmath>

long smallest_factor(long n){
	if(n <= 1) throw 20;
	for(long i = 2; i < ceil(sqrt(n)); i++){
		if(n % i == 0) return i;
	}
	return n;
}

int main(){
	long n = 600851475143;
	long p = smallest_factor(n);
	while(p < n){
		n /= p;
		p = smallest_factor(n);
	}
	std::cout << n;

	return 0;
}
