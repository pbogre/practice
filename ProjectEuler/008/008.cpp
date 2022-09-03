#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string read_digits(){
	ifstream digits("digits");
	std::string content;
	content.assign( (istreambuf_iterator<char>(digits) ),
			(istreambuf_iterator<char>()    ) );
	return content;
}

int main(){
	string digits = read_digits();
	int adj = 13;
	long long max_prod = 0;

	for(int i = 0; i < digits.length() - adj; i++){
	        long long prod = 1;
		for(int j = 0; j < adj; j++){
			int d = digits[i+j] - '0';
			prod *= d;
		}

		if(prod > max_prod) max_prod = prod;
	}

	cout << max_prod;
	return 0;
}
