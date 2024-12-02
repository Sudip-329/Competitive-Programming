// Sudip_329 : 05/10/24
#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

const double maxxi_val = 1e18;

void solve() {
    int N;
    cin >> N;

    double l_bound = 0.0;
    double m_bound = maxxi_val;

    for (int i = 1; i <= N; ++i) {
        double A, B;
        cin >> A >> B;

        double lower_bound = (B > 0) ? static_cast<double>(i) / B : maxxi_val;
        double upper_bound = (A > 0) ? static_cast<double>(i) / A : maxxi_val;

        l_bound = max(l_bound, lower_bound);
        m_bound = min(m_bound, upper_bound);
    }

    if (l_bound <= m_bound) {
        cout << fixed << setprecision(6) << l_bound << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}