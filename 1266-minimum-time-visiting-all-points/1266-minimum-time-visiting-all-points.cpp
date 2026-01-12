class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count = 0;

        for(int i=0;i<points.size()-1;i++){
            int a1= points[i][0];
            int b1 = points[i][1];

            int a2 = points[i+1][0];
            int b2 = points[i+1][1];

            count += max(abs(a1-a2),abs(b1-b2));

        }
        return count;
        
    }
};