class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>vowels;
        unordered_map<char,int>consonents;

        for(char x:s){
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
                vowels[x]++;
            }else{
                consonents[x]++;
            }
        }
        int maxVowel=0;
        int maxConsonent = 0;
        for(auto x:vowels){
            // cout<<x.first<<" "<<x.second <<endl;
            if(x.second>maxVowel){
                maxVowel = x.second;
            }
        }

        for(auto x:consonents){            
            // cout<<x.first<<" "<<x.second <<endl;

            if(x.second>maxConsonent){
                maxConsonent = x.second;
            }
        }
        // cout<<maxConsonent;
        // cout<<maxVowel;

        return maxConsonent+maxVowel;


    }
};