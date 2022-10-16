#include <iostream>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int cnt[n], high = 0, hi;
	for(int i = 0; i < n; i++){
		cin >> cnt[i];
		if(cnt[i] >= high){
			high = cnt[i];
			hi = i;
		}
	}
	cout << hi+1 << endl;
	
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}
