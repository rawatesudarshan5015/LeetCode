class Solution {
public:
    bool doesAliceWin(string s) {
        int count=0;
        for(char x: s){
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
                count++;
            }
        }
        if(count==0) return false;
        return true;
    }
};