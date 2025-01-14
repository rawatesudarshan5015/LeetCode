class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
         int n=A.size();
        vector<int>ans(n,0);

        unordered_set<int>mp;
        int cnt=0;

        for(int i=0;i<n;i++){
            if(mp.count(A[i])){
                cnt++;
            }
            mp.insert(A[i]);

            if(mp.count(B[i])){
                cnt++;
            }
            mp.insert(B[i]);

            ans[i]=cnt;
        }
        return ans;

    }
};