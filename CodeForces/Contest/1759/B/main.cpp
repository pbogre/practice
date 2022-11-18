// i am a worthless stupid waste of oxygen


#include <iostream>
using namespace std;

void solve(){
  int m,s;
  cin >> m >> s;
  int b[m];
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }

  //sort
  for(int i = 0; i < m; i++){
    for(int j = 0; j < m; j++){
      if(b[j]>b[i]) swap(b[i], b[j]);
    }
  }

  //find missing
  int c = 0;
  for(int i = 1; i <= b[m-1]; i++){
    //cout << "is: " << b[c] << " - should be: " << i << " - sum: " << s << endl;
    if(b[c] != i){
      for(int j = i; j < b[c]; j++){
        //cout << "remove " << j << endl;
        s -= j;
      }
      i = b[c];
    }
    c++;
  }

  int k = b[m-1]+1;
  while(s > 0){
    s -= k;
    k++;
  }
  if(s == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();
}
