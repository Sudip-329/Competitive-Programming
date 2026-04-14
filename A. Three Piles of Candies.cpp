#include <iostream>

using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    // Calculate the total sum and divide by 2
    cout << (a + b + c) / 2 << endl;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}
