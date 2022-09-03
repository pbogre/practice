#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int k, n, w;
	long long S = 0;
	cin >> k >> n >> w;
	
	for(int i = 1; i <= w; i++){
		S += i * k;
	}
	
	int borrow = S - n;
	if(borrow < 0) cout << 0;
	else cout << borrow;
}
