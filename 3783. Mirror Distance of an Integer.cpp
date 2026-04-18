class Solution {
public:
    int revval(int n) {
        int newnum = 0;
        while (n != 0) {
            newnum = newnum * 10 + n % 10;
            n /= 10;
        }
        return newnum;
    }

    int mirrorDistance(int n) {
        return abs(n - revval(n));
    }
};
