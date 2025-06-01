class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=0;
        int secondmax=0;

        for(auto x:nums){
            if(max<=x){
                secondmax=max;
                max=x;
            }else if(x>secondmax && x!=max){
                secondmax=x;
            }
        }
        return (max-1)*(secondmax-1);
    }
};