class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n < 2) return s;

        int maxLength = 1;
        string ans = s.substr(0, 1);

        for (int i = 0; i < n; i++) {

            // EVEN length palindrome
            int k = i - 1;
            int j = i;
            while (k >= 0 && j < n && s[k] == s[j]) {
                k--;
                j++;
            }
            if (j - k - 1 > maxLength) {
                maxLength = j - k - 1;
                ans = s.substr(k + 1, maxLength);
            }

            // ODD length palindrome
            k = i - 1;
            j = i + 1;
            while (k >= 0 && j < n && s[k] == s[j]) {
                k--;
                j++;
            }
            if (j - k - 1 > maxLength) {
                maxLength = j - k - 1;
                ans = s.substr(k + 1, maxLength);
            }
        }
        return ans;
    }
};
