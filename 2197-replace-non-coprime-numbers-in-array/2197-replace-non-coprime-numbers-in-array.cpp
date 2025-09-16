class Solution {
public:
int gcd (int a,int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

 long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        int start = 0;
        int current=1;;
        vector<int>ans;
        while(start<nums.size()-1){
            // cout<<nums[start]<<endl;
            if(gcd(nums[start],nums[current])>1){
                long long temp = lcm(nums[start],nums[current]);
                // cout<<temp<<endl;
                nums[current]=temp;
                current++;
                start++;

            }else{
                
                ans.push_back(nums[start]);
                start++;
                current++;
            }
            

            
        }
        ans.push_back(nums[start]);
        return ans;
        
    }
};