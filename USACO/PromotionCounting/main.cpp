#include <fstream>
using namespace std;

int main(){
	ifstream fin("promote.in");
	ofstream fout("promote.out");

	int bb, ba, sb, sa, gb, ga, pb, pa;
	fin >> bb >> ba;
	fin >> sb >> sa;
	fin >> gb >> ga;
	fin >> pb >> pa;

	int g2p = pa - pb;
	int s2g = ga - gb + pa - pb;
	int b2s = sa - sb + ga - gb + pa - pb;

	fout << b2s << endl << s2g << endl << g2p;
}
