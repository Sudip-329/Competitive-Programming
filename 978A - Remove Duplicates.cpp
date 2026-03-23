#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    set<int> seen;
    vector<int> result;

    // Traverse from right
    for(int i = n - 1; i >= 0; i--) {
        if(seen.find(a[i]) == seen.end()) {
            seen.insert(a[i]);
            result.push_back(a[i]);
        }
    }

    // Reverse to restore order
    reverse(result.begin(), result.end());

    cout << result.size() << endl;
    for(int x : result) cout << x << " ";

    return 0;
}
