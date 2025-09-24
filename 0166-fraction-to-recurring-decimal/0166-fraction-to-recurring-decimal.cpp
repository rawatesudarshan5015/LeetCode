class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {

        if(numerator==0) return 0;

        string ans = "";
        if ((numerator < 0) ^ (denominator < 0)) {
            ans += "-";
        }
        long long num = llabs((long long) numerator);
        
    }
};