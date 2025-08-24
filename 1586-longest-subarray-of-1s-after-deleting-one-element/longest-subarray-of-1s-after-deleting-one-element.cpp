class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int i = 0, j= 0, n = nums.size();

        int maxVal = 0, count = 0;

        while(j<n) {


            if(nums[j] == 0) {


                count ++ ;
            }

            while(count > 1) {

                if(nums[i] == 0) {

                    count--;
                }

                i++;
            }

            

            maxVal = max(maxVal,j-i);

            j++;




        }

        return maxVal;
        
    }
};