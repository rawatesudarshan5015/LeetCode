class Solution {
public:

    int binarySearch(vector<int>& potions,long long& success,int& spell,int i,int j){

        //base condition

        if(i>j){
            // cout<<mid<<" ";
            return potions.size();
        }
        int mid = (i+j)/2;
        long long product = (long long)potions[mid] * spell;


        if(product>=success){
            if(mid == 0 || (long long)potions[mid - 1] * spell < success){
                return mid;
            }
            return binarySearch(potions,success,spell,i,mid-1);
        }else{
            return binarySearch(potions,success,spell,mid+1,j);

        }        

    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(),potions.end());

        for(int i=0;i<spells.size();i++){
            int idx =binarySearch(potions,success,spells[i],0,potions.size()-1);
            // cout<<count<<endl;
           int count = potions.size()-idx;
            ans.push_back(count);
        }
        return ans;
    }
};