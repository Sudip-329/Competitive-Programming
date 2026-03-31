
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    int max_tastiness = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            int max_price = max(a[i], a[j]);
            int min_price = min(a[i], a[j]);

            int discount = min(max_price / 2, 100);
            
            // Calculate total cost after discount
            int total_cost = min_price + (max_price - discount);
            
            // If it fits the budget, update max_tastiness
            if (total_cost <= k) {
                max_tastiness = max(max_tastiness, b[i] + b[j]);
            }
        }
    }
    
    cout << max_tastiness << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
