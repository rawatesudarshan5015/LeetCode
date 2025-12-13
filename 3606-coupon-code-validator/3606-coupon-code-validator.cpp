class Solution {
public:
    bool isValid(const string& s) {
        if (s.empty()) return false;
        for (unsigned char c : s) {
            if (!isalnum(c) && c != '_') return false;
        }
        return true;
    }

    vector<string> validateCoupons(
        vector<string>& code,
        vector<string>& businessLine,
        vector<bool>& isActive
    ) {
        unordered_map<string, int> priority{
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3}
        };

        vector<pair<int, string>> temp;

        for (int i = 0; i < code.size(); i++) {
            if (isActive[i] &&
                priority.count(businessLine[i]) &&
                isValid(code[i])) {

                temp.push_back({priority[businessLine[i]], code[i]});
            }
        }

        sort(temp.begin(), temp.end());

        vector<string> ans;
        for (auto& p : temp) {
            ans.push_back(p.second);
        }

        return ans;
    }
};
