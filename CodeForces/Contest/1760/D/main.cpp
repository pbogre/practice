// dirtiest code ive written lol, works but unsurprisingly got time exception on test 12

#include <iostream>
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int o = 0;
  string out = "YES";
  for(int l = 0; l < n; l++){
    //cout << endl << endl << "L CONDITIONS:" << endl;
    //cout << "condition 1:" << endl;
    if(l != 0){
      //cout << a[l-1] << " >=? " << a[l] << endl;
      if(a[l-1] <= a[l]) { 
        //cout << "Not met" << endl; 
        continue;}
      //else cout << "met" << endl;
    }
    //else cout << "met" << endl;

    for(int r = l; r < n; r++){
      //cout << endl << endl << "L & R CONDITIONS: " << endl;
      //cout << "L=" << l << "(" << a[l] << "), R=" << r << "(" << a[r] << ")" << endl;
      //cout << endl << "condition 2:" << endl;
      //cout << a[l] << " =? all a[" << l << ".." << r << "]" <<  endl;
      bool bb = true;
      for(int i = l; i <= r; i++){
        //cout << a[i] << ", " << a[l] << endl;
        if(a[i] != a[l]) {bb = false; break; }
      }
      if(!bb) { 
        //cout << "not met" << endl; 
        break;}
      //else cout << "met" << endl;

      //cout << endl << "condition 3: " << endl;
      bool c3 = false;
      if(r != n-1){
        //cout << a[r] << " <? " << a[r+1] << endl;
        if(a[r] >= a[r+1]) {
          //cout << "not met" << endl;
          continue; }
        else {//cout << "met" << endl;
              c3 = true;}
      }
      else { //cout << "met" << endl; 
        c3 = true;}

      if(c3) o++;
      if(o > 1) {out = "NO"; break;}
    }
    if(o > 1) {out="NO"; break;}
    //cout << "valley count: " << o << endl << endl << endl;
  }
  if(o == 0) out = "NO";
  cout << out << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();
}
