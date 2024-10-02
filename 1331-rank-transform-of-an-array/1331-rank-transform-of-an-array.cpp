class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>temp = arr;
        vector<int>ans;
        int rank=1;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            if(mp.find(temp[i])==mp.end()){
                mp[temp[i]]=rank++;
            }
        }
        for(auto i:arr){
            if(mp.find(i)!=mp.end()){
                int a = mp[i];
                ans.push_back(a);
            }
        }
        return ans;
    }
};