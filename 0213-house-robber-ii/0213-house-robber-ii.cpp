class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        int ans = max(solve(nums,0,n-1),solve(nums,1,n));

        return ans;
        
    }
    int solve(vector<int>& nums, int start, int end) {
        int prev2 = 0;  
        int prev1 = nums[start];  

        for (int i = start+1; i < end; i++) {
            int curr = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};