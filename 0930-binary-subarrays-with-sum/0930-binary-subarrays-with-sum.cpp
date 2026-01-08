class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        

        int ans = solve(nums,goal)-solve(nums,goal-1);

        return ans;    
    }

    int solve(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int n = nums.size();
        int l=0;
        int r=0;
        int count = 0;
        int sum=0;

        for(int r=0;r<n;r++){
            sum += nums[r];

            while (sum > goal) {
                sum -= nums[l];
                l++;
            }

            count += (r - l + 1);
           
        }
        return count;
    }
};