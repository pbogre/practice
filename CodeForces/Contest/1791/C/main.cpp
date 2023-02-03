#include <iostream>
using namespace std;

void solve(){
  int n;
  cin >> n;
  char s[n];
  cin >> s;

  int m = n;
  int r = 0;
  while(m > 0){
    //cout << s[r] << s[n-1-r] << endl;
    if((s[r] == '0' && s[n-1-r] == '1') || 
	s[r] == '1' && s[n-1-r] == '0'){
      m -= 2;
      r++;
    }
    else break;
  }
  cout << m << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();
}
