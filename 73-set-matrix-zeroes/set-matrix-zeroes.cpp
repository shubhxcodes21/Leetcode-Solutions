class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> x;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                 x.push_back({i, j});
            }
        }

        for (int i = 0; i < x.size(); i++)
        {
            int r = x[i].first;
            int c = x[i].second;

            for (int j = 0; j < matrix[0].size(); j++)
                matrix[r][j] = 0;

            for (int k = 0; k < matrix.size(); k++)
                matrix[k][c] = 0;
        }
    }
};