class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;

        for(auto x:arr){
            if(mp.find(x*2)!=mp.end()||(mp.find(x/2)!=mp.end() && x%2==0)){
                return true;
            }else{
                mp[x]++;
            }
        }
        return false;
    }
};