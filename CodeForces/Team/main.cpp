#include <iostream>
using namespace std;

int main(){
	int n, p = 0;
	cin >> n;
	int s[n][3];
	for(int i = 0; i < n; i++){
		cin >> s[i][0] >> s[i][1] >> s[i][2];
		if(s[i][0] + s[i][1] + s[i][2] > 1) p++;
	}
	
	cout << p;

}
