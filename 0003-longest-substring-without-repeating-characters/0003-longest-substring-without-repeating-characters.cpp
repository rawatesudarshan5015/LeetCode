class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.length();
        // int unique = 0;
        int ans = INT_MIN;
        int  i =0;
        // vector<int>chars(26,0);
        if(size<=1) return size;
        unordered_map<char,int>mp;
        for(int j=0;j<size;j++){
            
            
            mp[s[j]]++;

            while(mp[s[j]] >= 2){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);

        }
        return ans;
    }
};