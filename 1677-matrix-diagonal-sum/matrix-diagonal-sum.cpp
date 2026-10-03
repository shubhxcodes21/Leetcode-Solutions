class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0;
        for (int i = 0 , j = mat.size() - 1; i < mat.size() ; i++ , j--)
         {
            res += mat[i][i];
            res += mat[i][j];
        }
        if (mat.size() % 2 != 0) 
         res -= mat[mat.size()/2][mat.size()/2];
        return res;
    }
};