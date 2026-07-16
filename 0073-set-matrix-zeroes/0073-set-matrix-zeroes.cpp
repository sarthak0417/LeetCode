class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n, 0);
        vector<int> col(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
        return;
    }
};
/*
//run time error

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> markRow(n,0);
        vector<int> markCol(m,0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    int markRow[i];
                    int markCol[j];
                }
            }
        }
        for (int i=0;i<n;i++){
            if (markRow[i]) {
                for (int j = 0; j < m; j++) {
                    if (matrix[i][j] != 0) {
                        matrix[i][j] = -1;
                    }
                }
            }
        }
        for(int j=0;j<n;j++){
            if(markCol[j]) {
                for (int i = 0; i < n; i++) {
                    if (matrix[i][j] != 0) {
                        matrix[i][j] = -1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] == 0;
                }
            }
        }
    }
};
*/