class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.size();

        vector<int> chars(26, 0);

        int i = 0;
        int num = k;
        int ans = 0;

        for (int j = 0; j < n; j++) {

            chars[s[j] - 'A']++;

            int maxFreq = 0;

            for (int x = 0; x < 26; x++) {
                maxFreq = max(maxFreq, chars[x]);
            }

            num = (j - i + 1) - maxFreq;

            if (num <= k) {
                ans = max(ans, j - i + 1);
            }
            else {
                chars[s[i] - 'A']--;
                i++;
            }
        }

        return ans;
    }
};