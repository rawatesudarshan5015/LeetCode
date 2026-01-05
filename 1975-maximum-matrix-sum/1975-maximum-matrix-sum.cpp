class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        long long sum = 0;
        int n = matrix.size();
        int count = 0;
        int mini = INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]<1){
                    count++;
                }
                mini = min(mini,abs(matrix[i][j]));
                sum += abs(matrix[i][j]);
            }
        }
        if(count%2==0) return sum;

        return sum - 2*mini;
        
    }
 };