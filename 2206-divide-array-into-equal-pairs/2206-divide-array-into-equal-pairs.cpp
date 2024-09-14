class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        if(nums.size()%2!=0) return 0;

        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if((x.second)%2!=0){
                return 0;
            }
        }
        return 1;
    }
};