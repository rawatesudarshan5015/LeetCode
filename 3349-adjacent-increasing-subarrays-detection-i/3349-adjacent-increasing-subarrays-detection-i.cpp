class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int i = 0;
        int j = k;
        int count = 1;

        while(j<nums.size()){
            if(count == k ) return true;
            if(nums[i]<nums[i+1] && j+1<nums.size() && nums[j]<nums[j+1]){
                count++;
            }else{
                count = 1;
            }
            i++;
            j++;
        }
        return false;
    }
};