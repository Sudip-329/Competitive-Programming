#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<string> bus(n);
    for(int i = 0; i < n; i++) {
        cin >> bus[i];
    }
 
    bool found = false;
 
    for(int i = 0; i < n; i++) {
        // Check first pair
        if(!found && bus[i][0] == 'O' && bus[i][1] == 'O') {
            bus[i][0] = bus[i][1] = '+';
            found = true;
        }
        // Check second pair
        else if(!found && bus[i][3] == 'O' && bus[i][4] == 'O') {
            bus[i][3] = bus[i][4] = '+';
            found = true;
        }
    }
 
    if(found) {
        cout << "YES\n";
        for(int i = 0; i < n; i++) {
            cout << bus[i] << "\n";
        }
    } else {
        cout << "NO\n";
    }
 
    return 0;
}
