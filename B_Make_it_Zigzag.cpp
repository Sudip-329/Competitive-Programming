#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

void processTestCase() {
    int length;
    cin >> length;
    
    vector<int> original(length), adjusted(length);
    int maxSoFar = 0;
    
    for (int idx = 0; idx < length; ++idx) {
        cin >> original[idx];
        adjusted[idx] = original[idx];
        maxSoFar = max(maxSoFar, original[idx]);
        if (idx % 2 != 0) {
            adjusted[idx] = maxSoFar;
        }
    }
    
    int totalDecrement = 0;
    
    for (int idx = 0; idx < length; idx += 2) {
        long long upperBound = -1;
        
        if (idx > 0 && idx < length - 1)
            upperBound = min(adjusted[idx - 1], adjusted[idx + 1]);
        else if (idx == 0 && length > 1)
            upperBound = adjusted[idx + 1];
        else if (idx == length - 1 && length > 1)
            upperBound = adjusted[idx - 1];
        
        if (upperBound != -1 && original[idx] >= upperBound) {
            totalDecrement += original[idx] - (upperBound - 1);
        }
    }
    
    cout << totalDecrement << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCases;
    cin >> testCases;
    while (testCases--) {
        processTestCase();
    }
    
    return 0;
}







