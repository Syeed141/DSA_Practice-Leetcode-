class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
      unordered_map <int,int> um;
     
      
      for(int i = 0;i<nums.size();i++) {

        int t = target - nums[i];

        if(um.find(t) != um.end()) {

            return {um[t],i};
        }

        um[nums[i]] = i;



      }

      return {};

      
    }
};