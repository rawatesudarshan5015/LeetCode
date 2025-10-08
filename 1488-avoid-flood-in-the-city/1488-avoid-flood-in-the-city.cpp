class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1); 
        unordered_map<int, int> fullLake;
        set<int> dryDays;  

        for (int i = 0; i < n; i++) {
            int lake = rains[i];

            if (lake == 0) {
                dryDays.insert(i);
            } else {
                ans[i] = -1; 
                
                if (fullLake.find(lake) != fullLake.end()) {
                    int lastFilledDay = fullLake[lake];

                    auto it = dryDays.upper_bound(lastFilledDay);
                    if (it == dryDays.end()) {
                        return {};
                    }

                    ans[*it] = lake; 
                    dryDays.erase(it);
                }

                fullLake[lake] = i; 
            }
        }

        return ans;
    }
};
