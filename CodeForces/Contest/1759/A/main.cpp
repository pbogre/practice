#include <iostream>
using namespace std;

void solve(){
  string s;
  cin >> s;
  string y = "Yes";

  string out="YES";
  char n=' ';
  for(int i = 0; i < s.length(); i++){
    //cout << s[i] << " - " << n << endl;

    if(s[i] != 'Y' && s[i] != 'e' && s[i] != 's') {out = "NO"; break;}
    if(s[i] != n && i != 0) {out = "NO"; break;}


    if(s[i] == 'Y') n = 'e';
    else if(s[i] == 'e') n = 's';
    else if(s[i] == 's') n = 'Y';
  }

  cout << out << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();
}
