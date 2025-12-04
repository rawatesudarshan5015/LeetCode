class Solution {
public:
    int jump(vector<int>& nums) {
        int count = 0;
        int maxjump = 0;
        int curjump=0;
        for(int i=0;i<nums.size()-1;i++){
            maxjump = max(maxjump,i+nums[i]);

            if(i==curjump){
                count++;
                curjump = maxjump;
            }
        }
        return count;
    }
};