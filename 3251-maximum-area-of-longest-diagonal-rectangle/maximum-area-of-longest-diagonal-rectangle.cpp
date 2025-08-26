class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {

        double maximum = 0;
        int area = 0;

        for(int i =0; i<dimensions.size();i++){

            int l = dimensions[i][0];
            int b = dimensions[i][1];
            double d = sqrt(l*l + b*b);

            if(d> maximum) {

                maximum = d;
                area = l*b;
            }

            else if(d == maximum) {

                area = max(area, l*b);
            }
        }
        return area;
        
    }
};