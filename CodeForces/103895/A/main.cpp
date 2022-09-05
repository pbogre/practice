#include <iostream>
using namespace std;

void solve(){
	int n[7];
	for(int i = 0; i < 7; i++) cin >> n[i];
	
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			if(n[i] < n[j]) swap(n[i], n[j]);
		}
	}
	cout << n[6] - n[0];
}

int main(){
	solve();
}
