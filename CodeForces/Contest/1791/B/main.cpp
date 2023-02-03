#include <iostream>
#include <ostream>
using namespace std;

void solve(){
  int n;
  cin >> n;
  char s[n];
  cin >> s;

  int y = 0;
  int x = 0;
  for(int i = 0; i < n; i++){
    if(s[i] == 'U') y++;
    if(s[i] == 'D') y--;
    if(s[i] == 'R') x++;
    if(s[i] == 'L') x--;

    if(y == 1 && x == 1){
      cout << "yes" << endl;
      return;
    }
  }

  cout << "no" << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();
}
