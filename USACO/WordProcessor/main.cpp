#include <vector>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("word.in");
	ofstream fout("word.out");

	int N, K;
	fin >> N >> K;

	string essay[N];
	vector< vector<string> > lines(N);
	for(int i = 0; i < N; i++) fin >> essay[i];
	
	int cur_K = 0, cur_L = 0;
	for(int i = 0; i < N; i++){
		if(cur_K + essay[i].length() <= K){
			cur_K += essay[i].length();
		}
		else {
			cur_L++; 
			cur_K = essay[i].length();
		}
		lines[cur_L].push_back(essay[i]);
	}

	for(int i = 0; i < lines.size(); i++){
		for(int j = 0; j < lines[i].size(); j++){
			fout << lines[i][j];
			if(j != lines[i].size()-1) fout << " ";
			else fout << endl;
		}
	}

}
