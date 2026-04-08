#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    
    int days = 0;
    set<char> memory;
    
    for (char c : s) {
        memory.insert(c);
        // If the set size exceeds 3, we must start a new day
        if (memory.size() == 4) {
            days++;
            memory.clear();
            memory.insert(c);
        }
    }
    
    // Add the final day for the remaining characters
    if (!memory.empty()) {
        days++;
    }
    
    cout << days << "\n";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
