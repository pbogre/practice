#include <iostream>
using namespace std;

// honestly I can't even blame
// myself for this, what is
// "maximize the quality of the worst carrot"
// or "maximum value of the lowest quality" 
// supposed to mean ???

// i have now re-read that question
// a couple dozens time. it's just 
// incredible how poorly written it is
int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
	       cin >> a[i];
	}
	
	int high = 0;
	int si = 0, limit = si+k;
	while(limit < n){
		limit = si+k;
		if(limit > n) limit = n;

		//cout << si << "->" << limit << endl;
		int _high = 0;
		for(int i = si; i < limit; i++){
			if(a[i] > _high){
				_high = a[i];
				si = i+1;
			}
		}
		//cout << "_high=" << _high << endl;
		if(_high > high) high = _high;
	}
	cout << high;
}
