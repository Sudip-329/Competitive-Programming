#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> b(n);
    int max_val = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] > max_val) {
            max_val = b[i];
        }
    }

    sort(b.begin(), b.end());
    
    bool possible = true;
    
    // Check for duplicates strictly less than max_val
    for (int i = 0; i < n - 1; i++) {
        if (b[i] == b[i + 1] && b[i] < max_val) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
