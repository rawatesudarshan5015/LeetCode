class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {

        unordered_map<int, vector<int>> rowMap;
        unordered_map<int, vector<int>> colMap;


        for (auto &b : buildings) {
            rowMap[b[0]].push_back(b[1]);
            colMap[b[1]].push_back(b[0]);
        }

        for (auto &it : rowMap) {
            sort(it.second.begin(), it.second.end());
        }
        for (auto &it : colMap) {
            sort(it.second.begin(), it.second.end());
        }

        int result = 0;

        for (auto &b : buildings) {
            int x = b[0], y = b[1];

            bool left = false, right = false;
            bool up = false, down = false;

            auto &cols = rowMap[x];

            int posY = lower_bound(cols.begin(), cols.end(), y) - cols.begin();

            if (posY > 0) left = true;

            if (posY + 1 < cols.size()) right = true;

            if (!left || !right) continue;

          
            auto &rows = colMap[y];

            int posX = lower_bound(rows.begin(), rows.end(), x) - rows.begin();

            if (posX > 0) up = true;
            if (posX + 1 < rows.size()) down = true;

            if (!up || !down) continue;

           
            result++;
        }

        return result;
    }
};
