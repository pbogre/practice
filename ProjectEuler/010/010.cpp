#include <iostream>
#include <cmath>
using namespace std;

long prime_sieve(int n){
	bool primes[n]; primes[1] = false;
	for(int i = 2; i < n; i++) primes[i] = true;

	for(int i = 2; i < ceil(sqrt(n)); i++){
		if(primes[i]){
			for(long j = i*i; j < n; j+=i){
				primes[j] = false;
			}
		}
	}

	long sum = 0;
	for(int i = 0; i < n; i++){
		if(primes[i]) sum += i;
	}
	return sum;
}

int main(){
	int max = 2000000;

	cout << prime_sieve(max);
	
	return 0;
}
