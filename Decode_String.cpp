#include <iostream>
#include <string>
#include <algorithm> 
 
int main() {
    int q;
    std::cin >> q;
    while (q--) {
        int n;
        std::cin >> n;
        std::string t;
        std::cin >> t;
        std::string s = "";
        for (int i = n - 1; i >= 0; --i) {
            if (t[i] == '0') {
                int digit = std::stoi(t.substr(i - 2, 2));
                s += (char)('a' + digit - 1);
                i -= 2;
            } else {
                int digit = std::stoi(t.substr(i, 1));
                s += (char)('a' + digit - 1);
            }
        }
        std::reverse(s.begin(), s.end()); 
        std::cout << s << std::endl;
    }
    return 0;
}
