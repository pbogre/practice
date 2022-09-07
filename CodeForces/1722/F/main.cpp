#include <iostream>
#include <vector>
using namespace std;

bool isL(int x, int y, vector< vector<char> > &grid){
	int sx = x-1, ex = x+1,
	    sy = y-1, ey = y+1;
	int n = 0, ncoord[2][2];

	if(sx < 0) sx += 1;
	if(ex == grid.size()) ex -= 1;
	if(sy < 0) sy += 1;
	if(ey == grid[y].size()) ey -= 1;
	
	for(int i = sx; i <= ex; i++){
		for(int j = sy; j <= ey; j++){
			
			if(i == x && j == y) continue;
			if(grid[j][i] == '*'){
				n += 1;
				if(n > 2) return false;

				ncoord[n-1][0] = i;
				ncoord[n-1][1] = j;
			}
		}
	}

	if(n != 2) return false;
	
	//cout << "Cell: " << x << y << endl;
	//cout << "N1: " << ncoord[0][0] << ncoord[0][1] << endl;
	//cout << "N2: " << ncoord[1][0] << ncoord[1][1] << endl << endl;

	if((ncoord[0][0] == x || ncoord[0][1] == y) ||
	   (ncoord[1][0] == x || ncoord[1][1] == y)){
	    	if(ncoord[0][0] == ncoord[1][0] || ncoord[0][1] == ncoord[1][1]) 
			return true;
		if((ncoord[0][0] == ncoord[1][0]+1 || 
		    ncoord[0][0] == ncoord[1][0]-1) &&
		   (ncoord[0][1] == ncoord[1][1]+1 || 
		    ncoord[0][1] == ncoord[1][1]-1))
			return true;
	}
	return false; 
}


int main(){
	int t;
	cin >> t;
	string res[t];
	for(int i = 0; i < t; i++){
		int n, m;
		cin >> n >> m;
		             
		vector< vector<char> > grid(n+1, vector<char>(m+1));
		for(int y = 0; y < n; y++){
			for(int x = 0; x < m; x++){
				cin >> grid[y][x];
			}
		}

		bool b = true;
		for(int y = 0; y < n; y++){
			if(!b) break;
			for(int x = 0; x < m; x++){
				if(grid[y][x] == '.') continue;
				if(!isL(x, y, grid)) {
					b = false;
					break;
				}
			}
		}
		
		if (b) res[i] = "yes";
		else res[i] = "no";
	}

	for(int i = 0; i < t; i++) cout << res[i] << endl;

}
