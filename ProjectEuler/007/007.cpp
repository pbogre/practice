#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n){
	for(int i = 2; i < n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int p;
	int n = 0;
	int i = 2;
	while(n<10001){
		if(is_prime(i)){
			p = i;
			n++;
		}
		i++;
	}
	cout << p;

	return 0;
}
