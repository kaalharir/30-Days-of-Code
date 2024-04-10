#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Template function to print elements of a generic vector
template<typename T>
void printArray(const vector<T>& arr) {
    for (const T& elem : arr) {
        cout << elem << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> int_vector(n);
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        int_vector[i] = value;
    }
    
    cin >> n;
    vector<string> string_vector(n);
    for (int i = 0; i < n; i++) {
        string value;
        cin >> value;
        string_vector[i] = value;
    }

    printArray(int_vector);
    printArray(string_vector);

    return 0;
}
