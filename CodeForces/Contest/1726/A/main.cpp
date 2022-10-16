#include <iostream>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) { cin >> a[i]; _a[i] = a[i]; }

	int best = 0;
	for(int i = 0; i < n; i++){ 			// 0,1,2,3
		for(int j = i+1; j < n; j++){		// 0,1,2
			//cout << i << ", " << j << endl;
			int high = 0;
			for(int k = 1; k < j-i; k++){
				
			}
			int diff = high - a[i];
			if(diff > best) best = diff;
		}
	}
	cout << best << endl;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}
