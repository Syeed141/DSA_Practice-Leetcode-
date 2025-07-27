class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        stack<int> r;
        stack<int> c;

        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int i = 0; i<rows;i++) {
            for(int j = 0; j< cols;j++) {

                if (matrix[i][j] == 0) {

                   r.push(i);
                   c.push(j);
                }
            }
        }


        while(!r.empty() && !c.empty()) {


            for(int a = 0; a < cols; a++){

                matrix[r.top()][a] = 0;
                
            }
            r.pop();

            for(int a = 0; a < rows; a++){

                matrix[a][c.top()] = 0;
                
            }
            c.pop();

        }
        
    }
};