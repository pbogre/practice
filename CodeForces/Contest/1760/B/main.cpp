#include <iostream>
using namespace std;

int letter(char c){
  return (int)(c) - 96;
}

void solve(){
  int n;
  string s;
  cin >> n >> s;

  int h = 0, hi = 0;
  for(int i = 0; i < n; i++){
    if(s[i] > h){ h = s[i]; hi = i; }
  }

  cout << letter(s[hi]) << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i< t; i++) solve();
}
