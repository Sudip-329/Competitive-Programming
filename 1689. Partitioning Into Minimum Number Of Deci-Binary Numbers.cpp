class Solution {
public:
    int minPartitions(string n) {
        int minDeciBinary = 0;
        for(const char&c:n){
            minDeciBinary = max(minDeciBinary,(c-'0'));
        }
        return minDeciBinary;
    }
};
