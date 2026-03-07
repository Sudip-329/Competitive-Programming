#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        int chest = 0, biceps = 0, back = 0;
        int reps;
        
        for (int i = 0; i < n; ++i) {
            cin >> reps;
            // 0-based indexing: 0 = chest, 1 = biceps, 2 = back
            if (i % 3 == 0) {
                chest += reps;
            } else if (i % 3 == 1) {
                biceps += reps;
            } else {
                back += reps;
            }
        }

        // Determine which muscle got the most exercise
        if (chest > biceps && chest > back) {
            cout << "chest\n";
        } else if (biceps > chest && biceps > back) {
            cout << "biceps\n";
        } else {
            cout << "back\n";
        }
    }

    return 0;
}
