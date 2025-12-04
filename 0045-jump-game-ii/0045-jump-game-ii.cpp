class Solution {
public:
    int jump(vector<int>& nums) {
        int currentmax = 0;
        int jump=0;
        int maxsofar=0;

        for(int i=0;i<nums.size()-1;i++){
            maxsofar = max(maxsofar,i+nums[i]);

            if(i==currentmax){
                jump++;
                currentmax = maxsofar;
            }
        }
        return jump;
    }
};