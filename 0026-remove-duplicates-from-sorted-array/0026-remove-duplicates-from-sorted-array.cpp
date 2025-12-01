class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1 || (nums.size()==2 && nums[0]==nums[1] )) return 1;
        else if(nums.size()==2 && nums[0]!=nums[1]) return 2;
        int i=0;
        int j=1;

        while(j<nums.size()){
            while(j<nums.size() && nums[i]==nums[j]){
                j++;
            }
            i++;
            nums[i]=nums[j];
        }
        return i;
    }
};