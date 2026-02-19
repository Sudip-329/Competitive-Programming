#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = 0;
    int last_one = -1; // Index of the last secured '1'

    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            continue;
        }

        int window_start = max(0, i - k + 1);

        if (last_one < window_start) {
            ans++;
        }
        
        last_one = i;
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}