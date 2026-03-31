
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    long long L = 0;
    long long R = 2e9; 
    vector<long long> not_equal;
    
    for (int i = 0; i < n; i++) {
        int type;
        long long x;
        cin >> type >> x;
        
        if (type == 1) {
            L = max(L, x); // Update the strictest lower bound
        } else if (type == 2) {
            R = min(R, x); // Update the strictest upper bound
        } else if (type == 3) {
            not_equal.push_back(x); // Store all 'not equal to' constraints
        }
    }

    if (L > R) {
        cout << 0 << "\n";
        return;
    }

    long long ans = R - L + 1;

    for (long long x : not_equal) {
        if (x >= L && x <= R) {
            ans--;
        }
    }
    
    cout << ans << "\n";
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
