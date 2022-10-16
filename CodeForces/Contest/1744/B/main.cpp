#include <iostream>
using namespace std;

bool even(int n){
	return n % 2 == 0;
}

void solve(){
	int n, q;
	cin >> n >> q;
	int e = 0, o = 0;
	long long sum = 0;
	for(int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		sum += tmp;
		
		if(even(tmp)) e++;
		else o++;
	}

	for(int i = 0; i < q; i++){
		int x;
		bool type;
		cin >> type >> x;
	
		if(type){
			sum += o * x;
			if(!even(x)){
				e += o;
				o = 0;
			}
		}
		else {
			sum += e * x;
			if(!even(x)){
				o += e;
				e = 0;
			}
		}

		cout << sum << endl;
	}	
}


int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}
