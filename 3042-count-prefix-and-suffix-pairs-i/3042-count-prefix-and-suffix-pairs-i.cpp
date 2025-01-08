class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        
        int count =0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                count +=(words[j].starts_with(words[i]) && words[j].ends_with(words[i]));
            }
        }
        return count;
    }
};