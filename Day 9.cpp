#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, string> phoneBook;
    string name;
    string phoneNumber;

    for (int i = 0; i < n; ++i) {
        cin >> name >> phoneNumber;
        phoneBook[name] = phoneNumber; // Corrected line
    }

    // Processing queries
    while (cin >> name) {
        if (phoneBook.find(name) != phoneBook.end()) {
            cout << name << "=" << phoneBook[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
