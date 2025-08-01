class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {


        int n = matrix[0].size();

        for(int i = 0; i<= n-2;i++) {

            for(int j = i+1 ; j<=n-1;j++) {

                swap(matrix[i][j], matrix[j][i]);


            }
        }

        for(auto &row : matrix) {

            int i = 0;
            int j = n-1;

            while(i<j) {
                swap(row[i],row[j]);
                i++;
                j--;


            }



        }

        
        
    }
    
};