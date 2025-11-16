class Solution {
public:
    int countVowelSubstrings(string words) {
        int ans = 0;


        for(int i=0;i<words.size();i++){
            unordered_map<char,int> mp;

            for(int j=i;j<words.size();j++){
                if(words[j]=='a'||words[j]=='e'||words[j]=='i'||words[j]=='o'||words[j]=='u'){
                    mp[words[j]]++;
                }else{
                    break;
                }

                if(mp.size()>4 && mp['a'] && mp['e'] && mp['i'] && mp['o'] && mp['u']){
                    ans++;
                }
            }
        }
        return ans;
    }
};