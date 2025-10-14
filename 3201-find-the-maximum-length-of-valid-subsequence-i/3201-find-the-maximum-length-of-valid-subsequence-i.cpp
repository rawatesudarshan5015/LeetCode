class Solution {
public:



    int solve(int i,int rem,vector<int>&nums,vector<vector<int>>&dp){
        if(i>=nums.size()) return 0;
        if(i==nums.size()-1){
            return 1;
        }

       int ans = 1;
        
       
            
        for(int j = i+1;j<nums.size();j++){
            if((nums[i]+nums[j])%2==rem){
                int temp =0;
                 if(dp[rem][j]!=-1){
                    temp= dp[rem][j];
                }else {
                    temp = solve(j,rem,nums,dp);
                    dp[rem][j]=temp;
                }
                ans = ans+ temp;
                break;
            }
           

        }
        dp[rem][i]=ans;
        return ans;

    }
    int maximumLength(vector<int>& nums) {
        int temp = nums[0]%2;
        int idx = 0;
        vector<vector<int>>dp(2,(vector<int>(nums.size()+1,-1)));
        for(int i=1;i<nums.size();i++){
            if(temp!=nums[i]%2){
                idx = i;
                break;
            }
        }
        int ans =0;
        ans= solve(0,0,nums,dp);
        ans = max(ans,solve(0,1,nums,dp));
        ans = max(ans,solve(idx,0,nums,dp));
        ans = max(ans,solve(idx,1,nums,dp));
        return ans;

    }
};