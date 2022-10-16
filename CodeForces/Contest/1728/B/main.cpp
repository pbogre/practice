#include <iostream>
using namespace std;

int permutation(int p[], int n){
	int x = 0;
	for(int i = 0; i < n; i++){
		if(x < p[i]) x += p[i];
		else x = 0;
	}
	return x;
}

void solve(){
	int n;
	cin >> n;

	int p[n];
	for(int i = 1; i <= n; i++) p[i-1] = i;

	int high = 0;
	for(int i = 0; i < )
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}
