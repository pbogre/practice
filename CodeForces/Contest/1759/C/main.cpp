#include <iostream>

void solve(){
 int l,r,x;
 cin >> l >> r >> x;
 int a,b;
 cin >> a >> b;

 if (a == b) {cout << 0 << endl; return;} 
 if (a + x > r && a - x < l) {count << -1 << endl; return;}


}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();
}
