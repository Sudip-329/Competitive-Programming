#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
        
        int changes = 0;
        
        // Check the last column (excluding the bottom-right corner)
        for (int i = 0; i < n - 1; i++) {
            if (grid[i][m - 1] == 'R') {
                changes++;
            }
        }
        
        // Check the last row (excluding the bottom-right corner)
        for (int j = 0; j < m - 1; j++) {
            if (grid[n - 1][j] == 'D') {
                changes++;
            }
        }
        
        cout << changes << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
