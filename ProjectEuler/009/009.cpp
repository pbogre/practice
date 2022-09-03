#include <iostream>
#include <cmath>
using namespace std;

bool is_triplet(int a, int b, int c){
	if(a >= b || b >= c) return false;

	double pyth = sqrt(pow(a, 2) + pow(b, 2));
	return c == pyth;
}

int main(){
	for(int a = 1; a < 1000; a++){
	for(int b = 1; b < 1000; b++){
	for(int c = 1; c < 1000; c++){
		if(a + b + c == 1000 && is_triplet(a, b, c)){
			cout << a*b*c;
		}
	}
	}
	}
	return 0;
}
