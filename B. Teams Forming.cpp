#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Optimize I/O operations
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // Sort the skill levels in ascending order
    std::sort(a.begin(), a.end());

    int total_problems = 0;

    // Pair adjacent students: (student 0, student 1), (student 2, student 3), etc.
    for (int i = 0; i < n; i += 2) {
        total_problems += (a[i + 1] - a[i]);
    }

    std::cout << total_problems << std::endl;

    return 0;
}
