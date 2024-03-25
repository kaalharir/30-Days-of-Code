#include <iostream>
#include <string>

using namespace std;

int main() {
	int T;
	cin >> T;

	while(T--) {
		string s;
		cin>>s;

		string evenIndexed = "", oddIndexed = "";
		for(int i=0; i< S.length(); ++i) {
			if(i % 2 == 0) {
				// Character at even index
				evenIndexed += S[i];
			} else {
				oddIndexed += S[i];
			}
		}
		cout << evenIndexed << " "<< oddIndexed << endl;
	}
	return 0;
}