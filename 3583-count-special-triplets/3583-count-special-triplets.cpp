class Solution {
public:
    int specialTriplets(vector<int>& nums) {
       
        // int count = 0;
        // int n =nums.size();

        // for(int i=0;i<n-2;i++){
        //     if(nums[i]%2!=0) continue;
        //     for(int j=i+1;j<n-1;j++){
        //         if(nums[i]/2!=nums[j]) continue;
        //         for(int k=j+1;k<n;k++){
        //             if (nums[k] != nums[j] * 2) continue;

        //             if(nums[i]==nums[j]*2 && nums[k]==nums[j]*2) count++;
        //         }
        //     }
        // }
        // return count;

const long long MOD = 1e9 + 7;
    long long cnt =0;
    unordered_map<int,int>leftcount;
    unordered_map<int,int>rightcount;




    for(int i=0;i<nums.size();i++){
      rightcount[nums[i]]++;
    }

     for (int j = 0; j < nums.size(); j++) {
            int mid = nums[j];

            // This element is no longer on the right side
            rightcount[mid]--;

            long long target = mid * 2LL;

            long long left = leftcount[target];  
            long long right = rightcount[target]; 

            cnt = (cnt + (left * right) % MOD) % MOD;


            leftcount[mid]++;
        }
        return cnt;

       
    }
};