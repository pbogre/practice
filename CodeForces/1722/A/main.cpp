#include <iostream>
using namespace std;

void solve(){
	string s;
	int name[5] = {84, 105, 109, 114, 117}, n;

	cin >> n >> s;
	if(s.size() != 5) {cout << "no" << endl; return;}

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(s[i] < s[j]) swap(s[i], s[j]);
		}
	}
	
	string o = "yes";
	for(int i = 0; i < 5; i++){
		if((int)s[i] != name[i]) {o = "no"; break;}
	}

	cout << o << endl;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}
