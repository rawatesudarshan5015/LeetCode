class Solution {
public:

   
    int triangleNumber(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(), nums.end());
    
        for(int i=nums.size()-1;i>=2;i--){
            int  j =0;
            int k=i-1;
            while(j<k){
                int sum = nums[j]+nums[k];
                if(sum>nums[i]){
                    count += (k-j);
                    // cout<<j<<" "<<k<<" "<<i<<" "<<count<<endl;
                    k--;
                }else j++;
                    
            

                
            }
        }


        return count;
    }
};