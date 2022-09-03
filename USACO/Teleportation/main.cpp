#include <fstream>
using namespace std;

int main(){
	ifstream fin("teleport.in");
	ofstream fout("teleport.out");

	int f[2], t[2], d = 0;
	fin >> f[0] >> f[1] >> t[0] >> t[1];

	bool use = true;	
	int dt = abs(f[1] - f[0]);
	for(int i = 0; i < 2; i++){
		int d1 = abs(t[0]-f[i]);
		int d2 = abs(t[1]-f[i]);

		if( d1 < d2 && d1 < dt) d += d1;
		else if (d2 < dt) d += d2;
		else use = false;
	}
	if(!use) fout << dt;
	else fout << d;
}
