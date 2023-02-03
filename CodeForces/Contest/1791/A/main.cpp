#include <iostream>
using namespace std;

void solve(){
  char c;
  cin >> c;

  string cf = "codeforces";
  for(int i = 0; i < 10; i++){
    if(cf[i] == c){
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
