class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int size = fruits.size();
        int unique = 0;
        int ans = INT_MIN;
        int i=0;
        vector<int>type(size,0);
        for(int j=0;j<size;j++){
                type[fruits[j]]++;
            if(type[fruits[j]]==1){
                unique++;
            } 
            if(unique<=2){

            ans = max(ans,j-i+1);
            }
            while(unique>2){
                    type[fruits[i]]--;
                if(type[fruits[i]]==0){
                    unique--;
                }
                i++;

            }
        }
        return ans;
    }
};