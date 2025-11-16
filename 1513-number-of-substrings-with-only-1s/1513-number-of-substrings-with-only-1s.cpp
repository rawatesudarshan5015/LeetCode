class Solution {
public:
   static const int M = 1000000007;

    int numSub(string s) {
        long long ans = 0;
        long long count = 0;

        for (char ch : s) {
            if (ch == '1') {
                count++;
                ans = (ans + count) % M;
            } else {
                count = 0;
            }
        }

        return (int)ans;
    
    }
};