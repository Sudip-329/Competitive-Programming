#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << (3 - n % 3) % 3 << endl;
    }

    return 0;
}
