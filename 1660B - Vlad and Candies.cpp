#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Edge case for a single type of candy
    if (n == 1) {
        if (a[0] <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return;
    }

    // Sort to easily find the largest and second largest elements
    sort(a.begin(), a.end());
    
    // Check the difference between the two largest piles
    if (a[n - 1] - a[n - 2] > 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
