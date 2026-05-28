#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long x, y;
        cin >> n >> m >> x >> y;
 
        // Read and discard the laser positions — they don't affect the answer
        long long tmp;
        for (int i = 0; i < n; i++) cin >> tmp;
        for (int i = 0; i < m; i++) cin >> tmp;
 
        cout << (n + m) << '\n';
    }
    return 0;
}
