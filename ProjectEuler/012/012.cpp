#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool is_prime(int n){
	for(int i = 2; i < n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int factors(int n){
	vector<int> pft;
	for(int i = 2; i < ceil(sqrt(n)); i++){
		if( n % i == 0 && is_prime(i)){
		       	pft.push_back(i);
		}
	}

	vector<int> exp(pft.size(), 0);
	for(int i = 0; i < pft.size(); i++){
		int temp = n;
		while(temp % pft[i] == 0){
			temp /= pft[i];
			exp[i] += 1;
		}
		exp[i] += 1;
	}
	
	int fn = 1;
	for(int i = 0; i < exp.size(); i++) fn *= exp[i];
	return fn;
}

int main(){
	cout << factors(28);
	//	while(factors < max){
//		i++;
//		int triangle = ( i * ( i + 1 ) ) / 2;
//		factors = get_factors(triangle);
//	}
//	cout << ( i * ( i + 1 ) ) / 2;
	return 0;
}
