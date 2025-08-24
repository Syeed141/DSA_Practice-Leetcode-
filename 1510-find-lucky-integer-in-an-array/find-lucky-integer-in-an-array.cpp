class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map <int,int> lucky ;

        int maxVal = 0;

        for(auto x : arr) {

            lucky[x] +=1;
        }

        for(auto y : lucky) {

            if(y.first == y.second) {


                maxVal = max(maxVal,y.first);


            }
        }

        if(maxVal == 0) {

            return -1;
        }

        return maxVal;
        
    }
};