class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();

        vector<int> order(n);
        iota(order.begin(), order.end(), 0); 
        sort(order.begin(), order.end(), [&](int a, int b) {
            return positions[a] < positions[b];
        });
        stack<int> st;

        for (int idx : order) {

            if (directions[idx] == 'R') {
                st.push(idx);
            } 
            else {
                while (!st.empty() && healths[idx] > 0) {
                    int j = st.top(); 

                    if (healths[j] < healths[idx]) {
                        st.pop();             // remove right robot
                        healths[idx]--;       // left robot loses 1 health
                        healths[j] = 0;       // mark right robot dead
                    }
                    // If right robot has more health → left robot dies
                    else if (healths[j] > healths[idx]) {
                        healths[j]--;         // right robot loses 1 health
                        healths[idx] = 0;     // left robot dies
                    }
                    // Equal health → both die
                    else {
                        st.pop();
                        healths[j] = 0;
                        healths[idx] = 0;
                    }
                }
            }
        }

        // Step 4: Collect surviving robots in original order
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (healths[i] > 0) {
                res.push_back(healths[i]);  // only survivors
            }
        }

        return res;
    }
};
