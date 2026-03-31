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

    sort(a.begin(), a.end());

    int max_kept = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (a[i] % 2 == a[j] % 2) {
                int current_length = j - i + 1;
                max_kept = max(max_kept, current_length);
            }
        }
    }

    cout << n - max_kept << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
