// I spent way too much time on this problem
// and I'm still convinced my solution is right.
// Yet, i keep failing on Test 3, and since there
// are no solutions for me to look at I can't say
// I've learned anything from this, I can't even figure
// out why it doesn't work on that specific test.

#include <iostream>
#include <map>
#include <vector>
using namespace std;
     
int main(){
	int tmp;
	vector<int> first;
	map<int, bool> m;
	while(cin >> tmp){
		if(m[tmp]){
			if(first.back() == tmp) first.pop_back();
		}
		else{ 
			m[tmp] = true;
			first.push_back(tmp);
	       	}
	}

	cout << first.back();
}
