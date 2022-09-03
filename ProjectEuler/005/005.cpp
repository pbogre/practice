#include <iostream>
using namespace std;

bool is_divisible(int n){
	for(int i = 2; i <= 20; i++){
		if(n % i != 0) return false;
	}
	return true;
}

int main(){
	int i = 1;
	bool found = false;
	while(!found){
		i++;
		found = is_divisible(i);
	}
	
	cout << i;
	return 0;
}
