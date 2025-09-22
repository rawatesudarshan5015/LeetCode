class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int x:nums){
            mp[x]++;
        }
        int maxFrequency = 0;
        for(auto x:mp){
            maxFrequency = max(maxFrequency,x.second);
        }
        int frequencyCount = 0;

        for(auto x:mp){
            if(x.second == maxFrequency){
                frequencyCount++;
            }
           
        }

        return maxFrequency*frequencyCount;


    }
};