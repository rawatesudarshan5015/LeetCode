class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int ans = numBottles;

        int rem = numBottles;

        while(rem>=numExchange){
            int temp = rem/numExchange;
            ans +=temp;

            rem = rem%numExchange + temp;

        }
        return ans;
        
    }
};