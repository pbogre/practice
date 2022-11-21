#include <iostream>
using namespace std;

void solve(){
  int a[3];
  cin >> a[0] >> a[1] >> a[2];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(a[i] > a[j]) swap(a[i], a[j]);
    }
  }
  cout << a[1] << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();
}
