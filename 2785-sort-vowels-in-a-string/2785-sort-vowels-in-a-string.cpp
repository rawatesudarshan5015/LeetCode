class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;

        for(char x:s){
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
                vowels.push_back(x);
            }
        }
        sort(vowels.begin(),vowels.end());
        string t="";
        int i=0;
        for(char x:s){
             if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){   
                t+=vowels[i];
                i++;

            }
            else{
                t+=x;
            }
        }
        return t;
    }
};