#include <iostream>
using namespace std;

int main() {
    int d1, m1, y1; // Actual return date
    cin >> d1 >> m1 >> y1;

    int d2, m2, y2; // Due date
    cin >> d2 >> m2 >> y2;

    int fine = 0;

    if (y1 > y2 || (y1 == y2 && m1 > m2 && d1 > d2)) {
        // Returned after the due year or within the same year but after the due month
        fine = 10000;
    } else if (y1 == y2 && m1 > m2) {
        // Returned within the same year but after the due month
        fine = 500 * (m1 - m2);
    } else if (y1 == y2 && m1 == m2 && d1 > d2) {
        // Returned within the same month but after the due day
        fine = 15 * (d1 - d2);
    }

    cout << fine << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int d1, m1, y1; // Actual return date
    cin >> d1 >> m1 >> y1;

    int d2, m2, y2; // Due date
    cin >> d2 >> m2 >> y2;

    int fine = 0;

    if (y1 > y2) {
        // Returned after the due year
        fine = 10000;
    } else if (y1 == y2 && m1 > m2) {
        // Returned within the same year but after the due month
        fine = 500 * (m1 - m2);
    } else if (y1 == y2 && m1 == m2 && d1 > d2) {
        // Returned within the same month but after the due day
        fine = 15 * (d1 - d2);
    }

    cout << fine << endl;

    return 0;
}
