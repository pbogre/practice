#include <iostream>
using namespace std;

void solve(){
	int n;
	cin >> n;
	char grid[2][n];
	for(int i = 0; i < n; i++){
		cin >> grid[0][i];
		if(grid[0][i] == 'G') grid[0][i] = 'B';
	}
	

	string o = "yes";
	for(int i = 0; i < n; i++){
		cin >> grid[1][i];
		if(grid[1][i] == 'G') grid[1][i] = 'B';

		if(grid[1][i] != grid[0][i]){
		     o = "no";
		}
	}

	cout << o << endl;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}
