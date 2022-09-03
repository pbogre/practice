#include <fstream>
#include <iostream>
using namespace std;

int main(){
	ifstream fin("buckets.in");
	ofstream fout("buckets.out");

	char grid[10][10];
	int B[2], R[2], L[2];
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			fin >> grid[i][j];
			if(grid[i][j] != '.'){
				if(grid[i][j] == 'B') { B[0] = j; B[1] = i;};
				if(grid[i][j] == 'L') { L[0] = j; L[1] = i;};
				if(grid[i][j] == 'R') { R[0] = j; R[1] = i;};
			
			}
		}
	}

	int l2b, l2r, d;
	l2b = abs(L[0]-B[0]) + abs(L[1]-B[1]);
	l2r = abs(L[0]-R[0]) + abs(L[1]-R[1]);
	d   = l2b - 1;
	//cout << B[0] << B[1] << " " << L[0] << L[1] << " " << R[0] << R[1];

	if((B[1] == L[1] && L[1] == R[1]) || 
	   (B[0] == L[0] && L[0] == R[0])){
	
	   	if(R[0] > min(L[0], B[0]) && R[0] < max(L[0], B[0])) d += 2;
	   	if(R[1] > min(L[1], B[1]) && R[1] < max(L[1], B[1])) d += 2;
	   } 
 	   
	fout << d;
}
