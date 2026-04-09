#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int get_position(char c) {
    if (c == '0') {
        return 10;
    }
    return c - '0';
}

void solve() {
    string pin;
    cin >> pin;
    
    int total_time = 0;
    int current_pos = 1;
    
    for (char c : pin) {
        int target_pos = get_position(c);

        total_time += abs(current_pos - target_pos) + 1;
        current_pos = target_pos;
    }
    
    cout << total_time << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
