class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, long long> mp;
        long long prefix = 0;
        long long ans = LLONG_MIN;

        mp[0] = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];

            int r = (i + 1) % k;

            if (mp.count(r)) {
                ans = max(ans, prefix - mp[r]);
            }

            if (!mp.count(r)) {
                mp[r] = prefix;
            } else {
                mp[r] = min(mp[r], prefix);
            }
        }
        return ans;
    }
};
