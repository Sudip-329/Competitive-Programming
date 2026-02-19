#include <iostream>
#include <vector>
#include <map>
using namespace std;

using ll = long long;
const ll INF = 1e18;
const int MAX_VAL = 200005;

vector<int> min_prime_factor(MAX_VAL);

void sieve() {
    for (int i = 0; i < MAX_VAL; ++i) min_prime_factor[i] = i;
    for (int i = 2; i * i < MAX_VAL; ++i) {
        if (min_prime_factor[i] == i) {
            for (int j = i * i; j < MAX_VAL; j += i) {
                if (min_prime_factor[j] == j) min_prime_factor[j] = i;
            }
        }
    }
}

void get_prime_factors(int n, map<int, vector<ll>>& p_costs, ll cost) {
    while (n > 1) {
        int p = min_prime_factor[n];
        if (p != 2) p_costs[p].push_back(cost);
        while (n % p == 0) n /= p;
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) { int b; cin >> b; }

    map<int, vector<ll>> p_costs;

    for (int i = 0; i < n; ++i) {
        p_costs[2].push_back((a[i] % 2 == 0) ? 0 : 1);
        get_prime_factors(a[i], p_costs, 0);
        get_prime_factors(a[i] + 1, p_costs, 1);
    }

    ll min_ans = INF;

    for (auto const& [p, costs] : p_costs) {
        if (costs.size() < 2) continue;
        ll min1 = INF, min2 = INF;
        for (ll cost : costs) {
            if (cost < min1) {
                min2 = min1;
                min1 = cost;
            } else if (cost < min2) {
                min2 = cost;
            }
        }
        min_ans = min(min_ans, min1 + min2);
    }

    cout << min_ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
