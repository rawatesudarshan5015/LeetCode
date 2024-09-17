class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>words;
        unordered_map<string,int>mp;
        string temp = s1+" "+s2;
        string ch ="";
        for(int i=0;i<temp.size();i++){
            if(temp[i]==' '){
                words.push_back(ch);
                ch = "";
            }else{
                ch +=temp[i];
            }
        }
        words.push_back(ch);

        for(auto x:words){
            mp[x]++;
        }
         vector<string>ans;
         for(auto x:mp){
            if(x.second==1){
                ans.push_back(x.first);
            }
         }
        return ans;
    }
};