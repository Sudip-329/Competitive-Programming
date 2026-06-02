class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {

        int minWater = INT_MAX;
        int minLand = INT_MAX;

        for (int i = 0; i < waterStartTime.size(); i++) {
            minWater = min(minWater,
                           waterStartTime[i] + waterDuration[i]);
        }

        for (int i = 0; i < landStartTime.size(); i++) {
            minLand = min(minLand,
                          landStartTime[i] + landDuration[i]);
        }

        int ans = INT_MAX;

        int minSt = minWater;

        for (int i = 0; i < landStartTime.size(); i++) {
            ans = min(ans,
                      max(minSt, landStartTime[i]) + landDuration[i]);
        }

        minSt = minLand;

        for (int i = 0; i < waterStartTime.size(); i++) {
            ans = min(ans,
                      max(minSt, waterStartTime[i]) + waterDuration[i]);
        }

        return ans;
    }
};
