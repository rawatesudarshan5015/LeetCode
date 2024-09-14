class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;            
        }
        unordered_set<int>st;
        for(auto x:mp){
            if(st.find(x.second)!=st.end()){
                return false;
            }else{
                st.insert(x.second);
            }
        }
       
        return true;
    }
};