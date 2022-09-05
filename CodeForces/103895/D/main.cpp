#include <iostream>
#include <map>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n, m;
	cin >> n >> m;
	map<ull, bool> mp;
	int temp;
	string out = "You Win";
	for(int i = 0; i < n; i++){
	       cin >> temp;
	       mp[temp] = true;
	}
	for(int i = 0; i < m; i++){
	       cin >> temp;
	       if(mp[temp]){
		    out = "You Lose";
		    break;
	       }
	}
	cout << out;
}
