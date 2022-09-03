#include <iostream>
using namespace std;

int main(){
	int n = 100;
	int square_sum = ( (n*n) * ( n*n + 2*n + 1) ) / 4;
	int sum_square = ( n * ( n + 1) * ( 2*n + 1 ) ) / 6;
	
	int diff = square_sum - sum_square;
	cout << diff;
	return 0;
}
