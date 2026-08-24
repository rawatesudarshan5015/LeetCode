class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero = 0;
        int one = 0;
        int ans = 0;
        int  i =0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==1) one++;
            else zero++;

            if(j-i+1>one+k){
                if(nums[i]==1) one--;
                else zero--;
                i++;
                

            }
            ans = max(ans, j - i + 1);

        }
        return ans;
    }
};