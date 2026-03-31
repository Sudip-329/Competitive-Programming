#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sort the array to easily pick valid minimums and maximums
    sort(a.begin(), a.end());

    int max_kept = 0;

    // Check all possible subarrays (i to j) in the sorted array
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            // If the min (a[i]) and max (a[j]) have the same parity
            if (a[i] % 2 == a[j] % 2) {
                // Calculate the number of elements we can keep
                int current_length = j - i + 1;
                max_kept = max(max_kept, current_length);
            }
        }
    }

    // The minimum operations is the total elements minus the max we can keep
    cout << n - max_kept << "\n";
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
