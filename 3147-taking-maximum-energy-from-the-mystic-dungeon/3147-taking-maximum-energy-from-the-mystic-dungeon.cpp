class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int maxi = INT_MIN;

        for(int i=0;i<energy.size();i++){
            int j=i;
            int temp = 0;
            while(j<energy.size()){
                temp +=energy[j];
                j = j+k;
                if(temp<0) break;
            }
            maxi = max(maxi,temp);
        }
        return maxi;
    }
};