// fail on test 6. 
// cannot figure out why

#include <iostream>
#include <utility>
using namespace std;

namespace{
	char keyboard[3][10] = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',
			 	 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', '-',
			   	 'z', 'x', 'c', 'v', 'b', 'n', 'm', '-', '-', '-'
       				};
}


int distance(char a, char b){
	pair<int, int> acoord; bool af = false;
	pair<int, int> bcoord; bool bf = false;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 10; j++){
			if(keyboard[i][j] == a){
				acoord.first = j;
				acoord.second = i;
				af = true;
			}
			else if(keyboard[i][j] == b){
				bcoord.first = j;
				bcoord.second = i;
				bf = true;
			}

			if(af && bf) break;	
		}
		if(af && bf) break;
	}

	int dx = abs(acoord.first - bcoord.first),
	    dy = abs(acoord.second - bcoord.second);

	return dy + dx;
}

int main(){
	string temp, input;
	int sum = 0;
	char left, right;
	while(cin >> temp){ input += temp; }

	for(int i = 0; i < input.size(); i++){
		if(input[i] == left || input[i] == right) continue;
		

		if(i == 0) left = input[i];
		else if(i == 1) right = input[i];
		else {
			int dl, dr;
			dl = distance(left, input[i]);
			dr = distance(right, input[i]);
			
			if(dl < dr){
				left = input[i];
				sum += dl;
			}
			else if(dr < dl){
				right = input[i];
				sum += dr;
			}
			else if(dl == dr){
				int nd = distance(input[i], input[i+1]),
				    ndr = distance(right, temp[i+1]);
				if(nd > ndr){
					left = input[i];
					sum += dl;
				}
				else {
					right = input[i];
					sum += dr;
				}
			}
		}
		cout << "left: " << left << " right: " << right << endl;
	}
	cout << sum;
} 
