#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main(){
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";

	//  Declar second integer, double, and string 

	int integer_x;
	double double_x;
	string string_x;

	cin >> integer_x >> double_x;
	getline(cin >> ws, string_x);

	cout << (i + integer_x) << endl;

	cout<<fixed << setprecision(1) << (d+double_x) << endl;

	cout << s << string_x <<endl;

	return 0;

}