#include <iostream>
using namespace std;

void solve(){
  int n;
  cin >> n;
  int s[n];
  for(int i = 0; i < n; i++) cin >> s[i];

  int h = 0, hi;
  for(int i = 0; i < n; i++){
    if(s[i] > h) { h = s[i]; hi = i;}
  }

  for(int i = 0; i < n; i++){
    if(i == hi){
      int hh = 0;
      for(int j = 0; j < n; j++){
        if(s[j] > hh && j != hi) hh=s[j];
      }

      cout << s[i]-hh << " ";
      continue;
    }

    cout << s[i]-h << " ";
  }
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();
}
