class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        
        while(i<nums.size()-2){
            if(nums[i]>0) return ans;
            int j=i+1;
            int k = nums.size()-1;
            if(i!=0 && nums[i]==nums[i-1]){
                    i++;
                    continue;
            }

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                 if(j!=i+1 && nums[j]==nums[j-1]){
                    j++;
                    continue;
                }
                if(k!=nums.size()-1 && nums[k]==nums[k+1]){
                    k--;
                    continue;
                }
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    k--;
                }
               
            }
             
                i++;

        }
        return ans;
    }
};