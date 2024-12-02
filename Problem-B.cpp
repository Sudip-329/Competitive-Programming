#include <iostream>
#include <vector>
#include <unordered_set>
#include <fstream>

using namespace std;

vector<int> generatePrimes(int maxN) {
    vector<bool> isPrime(maxN + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= maxN; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= maxN; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= maxN; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int countNSubtractorizations(int N, const unordered_set<int>& primeSet, const vector<int>& primes) {
    int count = 0;

    for (int p : primes) {
        if (p > N) break;

        for (int q1 : primes) {
            if (q1 > N) break;
            
            int q2 = q1 - p;
            if (q2 >= 0 && primeSet.count(q2)) {
                count++;
                break;
            }
        }
    }
    
    return count;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int T;
    cin >> T;

    vector<int> cases(T);
    int maxN = 0;

    for (int i = 0; i < T; ++i) {
        cin >> cases[i];
        if (cases[i] > maxN) {
            maxN = cases[i];
        }
    }

    vector<int> primes = generatePrimes(maxN);
    unordered_set<int> primeSet(primes.begin(), primes.end());

    for (int i = 0; i < T; ++i) {
        int N = cases[i];
        int result = countNSubtractorizations(N, primeSet, primes);
        cout << "Case #" << (i + 1) << ": " << result << endl;
    }

    return 0;
}
