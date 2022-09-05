#include <iostream>
using namespace std;

int main(){
	int F, A, B;
	cin >> F >> A >> B;
	
	for(int i = 1; i <= 1000; i++){
		F += A;
		if(F >= 1000) {cout << i; break;}
		F -= B;
	}
	if(F < 1000) cout << -1;
}
