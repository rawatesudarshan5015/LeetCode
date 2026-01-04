class Solution {
public:

    int sum(int num){
        int ans = 1+num;
        int count = 2;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                count++;
                ans+=i;
            }
            if(count>4) return 0;
        }
        cout<<endl;
        if(count==4) return ans;
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<6) continue;
        
            int temp = sum(nums[i]);
            ans+=temp;
        }
        return ans;
        
    }
};