// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <unordered_map> // Use unordered_map
// #include <unordered_set> // Use unordered_set

// using namespace std;

// // ... (rest of your code is identical) ...
// using ll = long long;
// const ll INF = 2e18;
// const int MAX_FACTOR = 200006; 
// vector<int> spf(MAX_FACTOR);

// void generateSPF() {
//     for (int i = 0; i < MAX_FACTOR; ++i) spf[i] = i;
//     for (int i = 2; (ll)i * i < MAX_FACTOR; ++i) {
//         if (spf[i] == i) {
//             for (ll j = (ll)i * i; j < MAX_FACTOR; j += i) {
//                 if (spf[j] == j) spf[j] = i;
//             }
//         }
//     }
// }

// // Get all unique prime factors of n in O(log n)
// void getPrimeFactors(int n, unordered_set<int>& factors) { // Use unordered_set
//     while (n > 1) {
//         int p = spf[n];
//         factors.insert(p);
//         while (n % p == 0) n /= p;
//     }
// }

// void findMinimumCost() {
//     int size;
//     cin >> size;
//     vector<int> numbers(size);
//     vector<ll> costs(size);
//     for (int i = 0; i < size; ++i) cin >> numbers[i];
//     for (int i = 0; i < size; ++i) cin >> costs[i];

//     unordered_set<int> relevantPrimes; // Use unordered_set
//     for (int i = 0; i < size; ++i) {
//         getPrimeFactors(numbers[i], relevantPrimes);
//         getPrimeFactors(numbers[i] + 1, relevantPrimes);
//     }

//     unordered_map<int, pair<ll, ll>> minCosts; // Use unordered_map
//     for (int p : relevantPrimes) {
//         minCosts[p] = {INF, INF};
//     }

//     for (int i = 0; i < size; ++i) {
//         for (int p : relevantPrimes) {
//             ll incrementNeeded = ((ll)p - (numbers[i] % p)) % p;
//             ll totalCost = incrementNeeded * costs[i];

//             if (totalCost < minCosts[p].first) {
//                 minCosts[p].second = minCosts[p].first;
//                 minCosts[p].first = totalCost;
//             } else if (totalCost < minCosts[p].second) {
//                 minCosts[p].second = totalCost;
//             }
//         }
//     }
    
//     ll minimumTotalCost = INF;
//     for (auto const& [p, costPair] : minCosts) {
//         minimumTotalCost = min(minimumTotalCost, costPair.first + costPair.second);
//     }

//     cout << minimumTotalCost << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     generateSPF(); // Run the sieve once

//     int testCases;
//     cin >> testCases;
//     while (testCases--) {
//         findMinimumCost();
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

using ll = long long;
const ll INF = 3e18;
const int MAX_VAL = 200005;
const int BOUND = 447;

vector<int> primes;
bool is_prime[MAX_VAL + 1];
pair<ll, int> min1[MAX_VAL + 1];
pair<ll, int> min2[MAX_VAL + 1];

void sieve() {
    fill(is_prime, is_prime + MAX_VAL + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p <= MAX_VAL; ++p) {
        if (is_prime[p]) {
            primes.push_back(p);
            for (ll i = (ll)p * p; i <= MAX_VAL; i += p)
                is_prime[i] = false;
        }
    }
}

void update_min_costs(int p, ll cost, int index) {
    if (index == min1[p].second) {
        min1[p].first = min(min1[p].first, cost);
        return;
    }
    
    if (cost < min1[p].first) {
        min2[p] = min1[p];
        min1[p] = {cost, index};
    } else if (cost < min2[p].first) {
        min2[p] = {cost, index};
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    for (int p : primes) {
        min1[p] = {INF, -1};
        min2[p] = {INF, -1};
    }

    ll min_ans = INF;

    for (int p : primes) {
        if (p > BOUND) break;
        
        for (int i = 0; i < n; ++i) {
            ll cost = ((ll)p - (a[i] % p)) % p;
            cost *= b[i];
            update_min_costs(p, cost, i);
        }
        if (min1[p].second != -1 && min2[p].second != -1) {
             min_ans = min(min_ans, min1[p].first + min2[p].first);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int m = 1; m <= BOUND; ++m) {
            int p_min = max(BOUND + 1, (a[i] + m - 1) / m);
            int p_max = (m == 1) ? MAX_VAL : (a[i] - 1) / (m - 1);

            if (p_min > p_max) continue;

            ll cost_k = (ll)m * b[i];
            ll cost_c = (ll)a[i] * b[i];

            auto it = lower_bound(primes.begin(), primes.end(), p_min);

            for (; it != primes.end(); ++it) {
                int p = *it;
                if (p > p_max) break;
                ll totalCost = cost_k * p - cost_c;
                update_min_costs(p, totalCost, i);
            }
        }
    }

    for (int p : primes) {
        if (p <= BOUND) continue;
        if (min1[p].second != -1 && min2[p].second != -1) {
             min_ans = min(min_ans, min1[p].first + min2[p].first);
        }
    }

    cout << min_ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
