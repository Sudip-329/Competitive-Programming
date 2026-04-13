class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int answer = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                answer = min(answer, abs(i - start));
            }
        }

        return answer;
    }
};
