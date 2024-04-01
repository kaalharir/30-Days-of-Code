#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;
public:
    int maximumDifference;

    // Constructor
    Difference(vector<int> a) {
        elements = a;
    }

    // Method to compute maximum difference
    void computeDifference() {
        int minElement = *min_element(elements.begin(), elements.end());
        int maxElement = *max_element(elements.begin(), elements.end());
        maximumDifference = maxElement - minElement;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> a;

    // Reading array elements from input
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        a.push_back(e);
    }

    Difference d(a);
    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
