#include <iostream>
#include <vector>
using namespace std;

void solve(){
	int n;
	char c;
	string s;
	cin >> n >> c >> s;

	vector<int> ci, gi;
	if(c == 'g'){
		cout << 0 << endl;
		return;
	}

	for(int i = 0; i < n; i++){
		if(s[i] == c) ci.push_back(i);
		else if(s[i] == 'g') gi.push_back(i);
	}

	int high = 0;
	for(int i = 0; i < ci.size(); i++){
		int w;
		if(ci[i] < gi[gi.size()-1]){
			int fg;
			for(int j = 0; j < gi.size(); j++){
				if(gi[j] > ci[i]) {fg = gi[j]; break;}
			}
			w = fg - ci[i];
		}
		else{
			w = ((n-1) - ci[i]) + gi[0] + 1;
		}

		if(w > high) high = w;
	}

	cout << high << endl;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}	
