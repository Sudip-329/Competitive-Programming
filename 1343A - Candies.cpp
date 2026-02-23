#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    // Check possible values for k starting from 2
    // Since n is up to 10^9, k will not exceed ~30 because 2^30 > 10^9
    for (int k = 2; k <= 30; ++k) {
        long long denominator = (1LL << k) - 1; // This efficiently calculates (2^k) - 1
        
        // If n is perfectly divisible by the denominator, we found our x
        if (n % denominator == 0) {
            cout << n / denominator << "\n";
            return;
        }
    }
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
