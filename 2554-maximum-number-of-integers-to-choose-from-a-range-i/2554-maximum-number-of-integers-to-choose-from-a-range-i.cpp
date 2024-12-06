class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        int count=0;
        int currentsum=0;
        unordered_map<int,int>mp;
        sort(banned.begin(),banned.end());

        for(auto x: banned){
            mp[x]=x;
        }
        
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                currentsum += i;
                if(currentsum<=maxSum){
                    count++;
                }
            }
        }
        return count;

    }
};