class Solution {
public:
    void helper1(unordered_map<char , int> &ump , string &s){
        unordered_map<char , int> temp;
        for (char ch : s){
            temp[ch] ++;
        }
        for (int i=0 ; i<s.size() ; i++){
            if (ump.find(s[i]) == ump.end()){
                ump[s[i]] = temp[s[i]];
            }
            else if (temp[s[i]] > ump[s[i]]){
                ump[s[i]] = temp[s[i]];
            }
        }
    }
    bool helper2(unordered_map<char , int> &ump , string &s){
        unordered_map<char , int> temp;
        for (char c : s){
            temp[c] ++;
        }
        int cnt = 0;
        for (const auto pr : ump){
            char key = pr.first;
            auto it = temp.find(key);
            if (it == temp.end()){
                return false;
            }
            else {
                if(it->second >= pr.second){
                    cnt ++;
                }
            }
        }
        if (cnt == ump.size()){
            return true;
        }
        return false;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char , int> ump;
        for (int i=0 ; i<words2.size() ; i++){
            string s = words2[i];
            helper1(ump , s);
        }
        vector<string> ans;
        for (int i=0 ; i<words1.size() ; i++){
            string s = words1[i];
            if (helper2(ump , s)){
                ans.push_back(s);
            }
        }
        return ans;
    }
};