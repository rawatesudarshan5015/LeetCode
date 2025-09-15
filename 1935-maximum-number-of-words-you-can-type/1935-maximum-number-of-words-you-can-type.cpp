class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {

        unordered_map<char,int>mp;

        for(char x: brokenLetters){
            mp[x]++;
        }
        bool isBroken = false;
        int count=0;
        for(int i=0;i<text.size();i++){
            if(mp.find(text[i])!=mp.end()){
                isBroken = true;
            }
            if(text[i]==' ' && !isBroken){
                count++;
            }else if(text[i]==' ' && isBroken){
                isBroken = false;
            }
        }
        if(!isBroken){
                count++;
            }
        return count;
        
    }
};