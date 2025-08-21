class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map <int,int> majoritycount ;

        for (int x : nums) {

            majoritycount[x] +=1; 
        }

      

        for(auto x : majoritycount ) {

            if(x.second > nums.size()/2) {


               return x.first ;
            }
        }


      
        return -1;
    }
};