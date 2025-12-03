class Solution {
public:

    int f(int idx,bool buy,vector<int>& prices){
        if(idx==prices.size()) return 0;

        int profit = 0;

        if(buy){
            profit = max((-prices[idx]+f(idx+1,false,prices)),(0+f(idx+1,true,prices)));
        }else{
            profit = max((prices[idx]+f(idx+1,true,prices)),(0+f(idx+1,false,prices)));
        }
        return profit;
    }


    int maxProfit(vector<int>& prices) {
        int ans = f(0,true,prices);
        return ans;
    }
};