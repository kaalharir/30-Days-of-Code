#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main() {
	
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int maxConsecutiveOnes = 0;
    int currentConsecutiveOnes = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            currentConsecutiveOnes++;
            maxConsecutiveOnes = max(maxConsecutiveOnes, currentConsecutiveOnes);
        } else {
            currentConsecutiveOnes = 0;
        }
        n /= 2;
    }

    cout << maxConsecutiveOnes << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);
    auto it = find_if(s.begin(), s.end(), [](unsigned char ch) { return !isspace(ch); });
    s.erase(s.begin(), it);
    return s;
}

string rtrim(const string &str) {
    string s(str);
    auto it = find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !isspace(ch); }).base();
    s.erase(it, s.end());
    return s;
}
