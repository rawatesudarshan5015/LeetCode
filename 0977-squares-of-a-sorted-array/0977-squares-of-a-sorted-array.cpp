class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        vector<int>ans(nums.size(),0);
        int k = j;

    
        

        while(k>=0){
            int temp = nums[i]*nums[i];
            int temp2 = nums[j]*nums[j];
            if(temp<temp2){
                ans[k]=temp2;
                k--;
                j--;
            }else{
                ans[k]=temp;
                k--;
                i++;
            
                
            }
        }
        return ans;

        
    }
};