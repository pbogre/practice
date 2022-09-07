#include <iostream>
#include <map>
using namespace std;

void solve(){
	int n;
	cin >> n;

	string words[3][n];
	map<string, int> map;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < n; j++){
			cin >> words[i][j];
			map[words[i][j]]++;
		}
	}
	for(int i = 0; i < 3; i++){
		int s = 0;
		for(int j = 0; j < n; j++){	
			if(map[words[i][j]] == 1) s += 3;
			if(map[words[i][j]] == 2) s += 1;
		}
		cout << s << " ";
	}
	
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}
