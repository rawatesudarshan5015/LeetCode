class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int vecSize = nums.size();
        for(int i=0;i<nums.size();i++){
            int j = 0;

            while(j<vecSize-1){
                nums[j] = (nums[j]+nums[j+1])%10;
                j++;
                cout<<nums[j]<<" ";
                
            }
            vecSize--;
            cout<<endl;
        }
        return nums[0];
        
    }
};