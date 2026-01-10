class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==num.size()) return "0";
        stack<char>st;

        for(int i=0;i<num.size();i++){

            while(!st.empty() && k>0 && st.top()-'0'>num[i]-'0'){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        while(k>0){
            st.pop();
            k--;
        }

        string res = "";

        while(!st.empty()){
            res+=st.top();
            st.pop();
        }

        while(res.size()!=1 && res.back()=='0'){
            res.pop_back();
        }

        reverse(res.begin(),res.end());
        return res;
    }
};