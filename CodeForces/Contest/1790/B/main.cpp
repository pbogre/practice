// its been a while, apparently i just suck at math now :(
#include <iostream>
using namespace std;

void solve(){
  int n, s, r;
  cin >> n >> s >> r;

  // question:
  // what sequence of (n-1) digits between 1,6 has its sum equal to r?
  int a[n];
  a[0] = s-r;
  for (int i = 1; i < n /* to n-1*/; i++) {
    for(int j = 1; j <= 6; j++){

      // test if a number is divisible by another number between 1-6 within n numbers?

      bool f = false;
      for(int k = 1; k <= 6; k++){
	cout << r << " - " << j << " divisible by " << k << "?";
	if((r-j) % k == 0 && r-j >= 0){
	  cout << " yes" << endl;
	  a[i] = j;
	  r -= j;
	  f = true;
	  break;
	}
      }
      if(f) break;
    }
  }

  for(int i = 0; i < n; i++) cout << a[i] << " ";
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) solve();;
}
