class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n + 2, 0);
        
        for (auto shift : shifts) {
            int left = shift[0], right = shift[1];
            int dir = shift[2] ? 1 : -1;
            diff[left + 1] += dir;
            diff[right + 2] -= dir;
        }
        int curr = 0;
        for (int i = 0; i < n; ++i) {
            curr = (curr + diff[i + 1]) % 26;
            s[i] = (s[i] - 'a' + 26 + curr) % 26 + 'a';
        }
        return s;
    }
};