#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n){
	int remainder, reverse = 0;
	while(n != 0){
		remainder = n % 10;
		reverse = (reverse * 10) + remainder;
		n /= 10;
	}

	return reverse;
}

bool odd_digits(int n){
    int d = floor(log10(n))+1;
    
    for(int i = 1; i <= d; i++){
        int remaining = pow(10, d-i);
        int current = floor( n / remaining);
        n = n % remaining;

        if(current % 2 == 0) return false;
    }
    return true;
}

int main(){
	int max = 100000000, n = 0;
	for(int i = 1; i <= max; i++){
		if(i % 10 == 0) continue;
		int ri = reverse(i);
		int sum = i + ri;
		if(odd_digits(sum)) n++;
	}
	cout << n;
	return 0;
}
