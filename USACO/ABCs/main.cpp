#include <iostream>
using namespace std;

void sort(int arr[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[i] < arr[j])
				swap(arr[i], arr[j]);
		}
	}
}

int main(){
	int num[7], a, b, c;
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> num[6];
		
	sort(num, 7);
	a = num[0]; 
	b = num[1];
	// (a b) x x x / /
	// 2 2 4 7 9 9 11
	for(int i = 2; i < 7 - 2; i++){
		if(num[i] != a+b) {c = num[i]; break;}
	}

	cout << a << " " << b << " " << c << endl;
}
