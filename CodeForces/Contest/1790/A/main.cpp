#include <iostream>
using namespace std;

#define PI "314159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534"

void solve(){
  string n;
  cin >> n;

  int count = 0;
  for(int i = 0; i < n.length(); i++){
   if(n[i] == PI[i]) count++;
   else break;
  }

  cout << count << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();
}
