class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());

        long long cur = mass;

        for (int a : asteroids) {
            if (cur < a) return false;
            cur += a;
        }

        return true;
    }
};
