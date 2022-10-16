// Doesn't work. I suspect
// it's because the way
// I choose the best option
// isn't right, AKA it's not
// choosing between first/last
// based on the lexicographically
// smallest value of the string it
// would create.
// Either that or I'm not checking
// for lexicographically smallest
// string properly.


#include <iostream>
using namespace std;

string rm_char(string s, int index){
	string r = "";
	for(int i = 0; i < s.length(); i++){
		if(i != index) r += s[i];
	}
	return r;
}

void solve(){
	string s, player[2] = {""};
	cin >> s;
	int n = s.length(); 

	for(int i = 0; i < n; i++){
		char f = s[0], l = s[s.length()-1];
		if(player[i % 2] + f < player[i % 2] + l){
			player[i % 2] += f;
			s = rm_char(s, 0);
		}
		else{
			player[i % 2] += l;
			s = rm_char(s, s.length()-1);
		}
	}
	
	if(player[0] < player[1]) cout << "Alice" << endl;
	else if(player[1] < player[0]) cout << "Bob" << endl;
	else if(player[0] == player[1]) cout << "Draw" << endl;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}
