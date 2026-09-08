class Solution {
private:
    void flag_row(vector<vector<int>>& matrix, int row) {
        int n = matrix[0].size();

        for(int j = 0; j < n; j++) {
            if(matrix[row][j] != 0)
                matrix[row][j] = -2145;
        }
    }

    void flag_col(vector<vector<int>>& matrix, int col) {
        int m = matrix.size();

        for(int i = 0; i < m; i++) {
            if(matrix[i][col] != 0)
                matrix[i][col] = -2145;
        }
    }


public:
    void setZeroes(vector<vector<int>>& matrix) {
     
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(matrix[i][j] == 0) {
                    flag_row(matrix, i);
                    flag_col(matrix, j);
                }

            }
        }
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(matrix[i][j] == -2145)
                    matrix[i][j] = 0;

            }
        }
    }
};