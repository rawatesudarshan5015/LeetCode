class Solution {
public:

    int solve(int i,int rem,vector<int>&nums){
        if(i>=nums.size()) return 0;
        if(i==nums.size()-1){
            return 1;
        }

        int ans=1;
        
    
            
           for(int j = i+1;j<nums.size();j++){
            if((nums[i]+nums[j])%2==rem){
               
                ans =ans+ solve(j,rem,nums);
                break;
            }
           

        }
        return ans;

    }
    int maximumLength(vector<int>& nums) {
        int temp = nums[0]%2;
        int idx = 0;
        for(int i=1;i<nums.size();i++){
            if(temp!=nums[i]%2){
                idx = i;
                break;
            }
        }
        int ans =0;
        ans= solve(0,0,nums);
        ans = max(ans,solve(idx,0,nums));
        ans = max(ans,solve(0,1,nums));
        ans = max(ans,solve(idx,1,nums));
        return ans;

    }
};