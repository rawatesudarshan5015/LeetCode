class Solution {
public:
    string baseNeg2(int n) {

        if(n<1) return "0";
        string res ="";

        while(n!=0){
            int rem = n%-2;
            n = n/-2;
            if(rem<0){
                n+=1;;
                rem += 2;

            }

            res.push_back(rem +'0');
        }
        reverse(res.begin(),res.end());
        return res;
    }
};