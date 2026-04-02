#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    // Optimize standard I/O operations for faster execution
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    // Use a 1-based index vector to match the problem statement
    vector<int> f(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> f[i];
    }
 
    // Iterate through each plane to check for a cycle of 3
    for (int i = 1; i <= n; ++i) {
        int first_crush = f[i];
        int second_crush = f[first_crush];
        int third_crush = f[second_crush];
        
        // If the third crush loops back to the original plane, it's a triangle
        if (third_crush == i) {
            cout << "YES\n";
            return 0;
        }
    }
 
    // If no cycle of 3 is found after checking all planes
    cout << "NO\n";
 
    return 0;
}
