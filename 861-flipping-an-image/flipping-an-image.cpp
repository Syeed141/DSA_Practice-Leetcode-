class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for (auto &row : image) {

            int n = row.size();

           
            int i = 0;
            int j =n-1;
            while(i<=j) {

                int temp = row[i];
                row[i] = row[j];
                row[i] = 1 - row[i];
                row[j] = temp;
                row[j] = 1 - row[j];

                i++;
                j--;

            }
           


        }

        return image;
    }
};