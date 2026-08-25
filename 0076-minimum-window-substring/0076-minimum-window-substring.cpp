class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char,int>mp;

        for(char x:t){
            mp[x]++;
        }
        int i=0;
         while (i < n && mp.find(s[i]) == mp.end()) {
            i++;
        }

        int ans_i = 0;
        int ans_j = INT_MAX;
        int j =i;

        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
            }
            // cout<<i<<" "<<j<<endl;
        
            int flag = 0;
            for(auto x:mp){
                if(x.second>0){
                    flag =1;
                    break;
                }
            }
            if(flag!=1){
               
                while(i<=j){
                    if (mp.find(s[i]) == mp.end()) {
                        i++;
                        continue;
                    }
                     mp[s[i]]++;

                     if (mp[s[i]] > 0) {
                        mp[s[i]]--;
                        break;
                    }
                    i++;

                }
                if(j-i<ans_j-ans_i){
                    ans_i = i;
                    ans_j =j;
                }
            }
                j++;
            

        // cout<<ans_i<<" "<<ans_j<<endl;
        }
        if (ans_j == INT_MAX) {
            return "";
        }
        return s.substr(ans_i,ans_j-ans_i+1);
        
    }
};