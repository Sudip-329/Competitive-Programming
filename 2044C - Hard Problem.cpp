#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long used_row1 = min(a, m);
        long long used_row2 = min(b, m);

        long long free_row1 = m - used_row1;
        long long free_row2 = m - used_row2;

        long long seated_c = min(c, free_row1 + free_row2);

        long long total = used_row1 + used_row2 + seated_c;

        cout << total << endl;
    }

    return 0;
}
