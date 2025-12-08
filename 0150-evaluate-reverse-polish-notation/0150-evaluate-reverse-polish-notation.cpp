class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(auto i: tokens){
            if(i=="-"){
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                st.pop();
                st.push(temp2-temp1);
            }else if(i=="+"){
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                st.pop();
                st.push(temp1+temp2);
            }else if(i=="/"){
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                st.pop();
                st.push(temp2/temp1);
            }else if(i=="*"){
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                st.pop();
                st.push(temp1*temp2);
            }else{
                st.push(stoi(i));
            }
            cout<< st.top()<<" ";
        }
        return st.top();
    }
};