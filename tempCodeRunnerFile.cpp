#include <iostream>
#include <unordered_map>

int main() {
  int t; // Number of test cases
  std::cin >> t;

  for (int i = 0; i < t; ++i) {
    int n; // Contest duration
    std::string log; // Contest log

    std::cin >> n >> log;

    // Dictionary to track time spent on each problem
    std::unordered_map<char, int> solved_problems;

    for (int j = 0; j < n; ++j) {
      char problem = log[j];
      // Update time spent on the current problem
      solved_problems[problem]++;

      // Check if the problem is solved based on difficulty
      if (solved_problems[problem] >= problem - 'A' + 1) {
        // Mark the problem as solved
        solved_problems[problem] = -1;
      }
    }

    // Count the number of solved problems
    int solved_count = 0;
    for (auto &entry : solved_problems) {
      if (entry.second == -1) {
        solved_count++;
      }
    }

    // Print the number of solved problems
    std::cout << solved_count << std::endl;
  }

  return 0;
}

