#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    try {
        int integer_value = stoi(S);
        cout << integer_value << endl;
    } catch (const invalid_argument&) {
        cout << "Bad String" << endl;
    }
    return 0;
}
