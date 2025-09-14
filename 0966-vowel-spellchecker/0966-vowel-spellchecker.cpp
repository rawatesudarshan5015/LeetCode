class Solution {
public:

    string lower(string word){
        string temp = "";
        for (char c : word) {
                temp+= tolower((unsigned char)c);  // cast to avoid UB
            }
            return temp;
    }

    string vowels(string word){
        string temp = "";
        for(char x:word){
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
                temp += '*';
            }else{
                temp += x;
            }
        }
        return temp;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        vector<string>ans;
        map<string,string>mp1;
        map<string,string>mp2;
        map<string,string>mp3;


        for(string x:wordlist){
            mp1[x]=x;
        }

        for(string x:wordlist){
            if(mp2.find(lower(x))==mp2.end()){
                mp2[lower(x)]=x;

            }
        }

        for(string x:wordlist){
            if(mp3.find(vowels(lower(x)))==mp3.end()){
                mp3[vowels(lower(x))]=x;
            }
        }

        for(string x:queries){
            string temp = x;
            if(mp1.find(temp)!=mp1.end()){
                ans.push_back(x);
            }else if(mp2.find(lower(temp))!=mp2.end()){
                ans.push_back(mp2[lower(temp)]);
            }else if(mp3.find(vowels(lower(temp)))!=mp3.end()){
                ans.push_back(mp3[vowels(lower(temp))]);
            }else{
                ans.push_back("");
            }

        }
        return ans;
    }
};