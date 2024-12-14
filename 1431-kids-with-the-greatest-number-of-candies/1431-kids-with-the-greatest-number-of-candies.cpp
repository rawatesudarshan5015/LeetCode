class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;

        int maxi = -1;
        for (auto x : candies) {
            maxi = max(maxi, x);
        }

        for (auto x : candies) {
            if (x + extraCandies >= maxi) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};