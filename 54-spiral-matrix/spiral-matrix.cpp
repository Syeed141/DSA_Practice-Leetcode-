class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row_begin = 0;
        int row_end = matrix.size() - 1;
        int col_begin = 0;
        int col_end = matrix[0].size() - 1;

        vector<int> ans;

        while(row_begin <= row_end && col_begin <= col_end) {
            // Traverse Right
            for(int i = col_begin; i <= col_end; i++) {
                ans.push_back(matrix[row_begin][i]);
            }
            row_begin++;

            // Traverse Down
            for(int i = row_begin; i <= row_end; i++) {
                ans.push_back(matrix[i][col_end]);
            }
            col_end--;

            // Traverse Left
            if(row_begin <= row_end) {
                for(int i = col_end; i >= col_begin; i--) {
                    ans.push_back(matrix[row_end][i]);
                }
                row_end--;
            }

            // Traverse Up
            if(col_begin <= col_end) {
                for(int i = row_end; i >= row_begin; i--) {
                    ans.push_back(matrix[i][col_begin]);
                }
                col_begin++;
            }
        }

        return ans;
    }
};