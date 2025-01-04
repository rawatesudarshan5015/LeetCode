class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<string>st;

        unordered_map<char,vector<int>>mp;


        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }


        for(auto i:mp){
            int mini = *min_element(i.second.begin(),i.second.end());
            int maxi = *max_element(i.second.begin(),i.second.end());
            
            for(int i=mini+1;i<maxi;i++){
                string temp ="";
                temp+=s[mini];
                temp+=s[i];
                temp+=s[maxi];
                st.insert(temp);
            }

        }
        return st.size();
    }
};