// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
//         // int n = intervals.size();
//         // vector<vector<int>>ans;
//         // int i = 0;

//         // while(i<n && newInterval[0]>intervals[i][1]){
//         //     ans.push_back(intervals[i]);
//         //     i++;
//         // }

//         // while(i<n && newInterval[1]>=intervals[i][0]){
//         //     newInterval[0]= min(newInterval[0],intervals[i][0]);
//         //     newInterval[1] = max(newInterval[1],intervals[i][1]);
//         //     i++;
//         // }
//         // ans.push_back(newInterval);


//         // while(i<n){
//         //     ans.push_back(intervals[i]);
//         //     i++;
//         // }

//         // return ans;


//     }
// };

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        

        vector<vector<int>>ans;

        for(int i=0;i<intervals.size();i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            int newStart;
            int newEnd;
            if(newInterval[0]>=start && newInterval[0]<=end){
            
                newStart = min(newInterval[0],start);

                for(;i<intervals.size();i++){
                    if(newInterval[1]>=intervals[i][0] && newInterval[1]<=intervals[i][1]){
                        newEnd = intervals[i][1];
                        ans.push_back({newStart,newEnd});
                        break;
                    }
                    i++;
                } 
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};