class Solution {
public:
    long long coloredCells(int n) {
        int m = n;
        long long ans=0;
        while(m){
            ans += 4*(m-1);
            m--;
        }

        return 1+ans;
    }
};