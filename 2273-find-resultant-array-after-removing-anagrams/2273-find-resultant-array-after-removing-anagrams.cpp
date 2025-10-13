class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<int>v(26,0);
        for(auto x:words[0]){
            v[x-'a'] +=1;
        }
        int i=1;
        while(i<words.size()){
            vector<int>temp(26,0);
            for(auto c: words[i]){
                temp[c-'a']+=1;
            }
            if(temp==v){
                words.erase(words.begin()+i);
            }else{
                v = temp;
                i++;
            }
            
           
        }
        return words;
    }
};