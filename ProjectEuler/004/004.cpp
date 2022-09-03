#include <iostream>
#include <cmath>
using namespace std;

bool is_palindrome(int n){
	int d = floor(log10(n)) + 1;

	char n_c[d];
	sprintf(n_c, "%d", n);

	for(int i = 0; i < d/2; i++){
		if(n_c[i] != n_c[d-1-i]) return false;
	}
	return true;
}

int main(){
	int p = 0;
	for(int i = 100; i < 1000; i++){
		for(int j = 100; j < 1000; j++){
			int n = i * j;
			if(n > p && is_palindrome(n)) p = n;
		}
	}
	cout << p;

	return 0;
}
