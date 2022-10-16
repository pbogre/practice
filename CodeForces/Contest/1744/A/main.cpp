#include <iostream>
#include <map>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];

	map<int, char> check;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	string s;
	cin >> s;

	for(int i = 0; i < n; i++)check[a[i]] = s[i];

	for(int i = 0; i < n; i++){
		if(check[a[i]] != s[i]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}
