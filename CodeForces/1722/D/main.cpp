#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void solve(){
	int n;
	cin >> n;

	char line[n];
	ll smax = 0;
	for(int i = 0; i < n; i++){
		cin >> line[i];
		if(line[i] == 'L') smax += i;
		if(line[i] == 'R') smax += n - i - 1;
	}

	vector<ll> max;
	for(int i = 0; i < n/2; i++){
		 
		if(line[i] == 'L'){
			smax += (n-i-1)-(i);
			max.push_back(smax);
			line[i] = 'R';
		}

		if(line[n-i-1] == 'R'){
			smax += (n-i-1)-(i);
			max.push_back(smax);
			line[n-i-1] = 'L';
		}
	}

	if(max.size() < n){
		for(int i = max.size()-1; i < n; i++) max.push_back(smax);
	}
	for(int i = 0; i < n; i++){
		if(i >= max.size()-1) max.push_back(max.back());
		cout << max[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	ll res[t][200000];
	for(int i = 0; i < t; i++) solve();
}
