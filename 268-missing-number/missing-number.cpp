class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> seen;
        
        for (int x : nums) {
            seen[x] = 1;  
        }

        int n = nums.size();
        for (int i = 0; i <= n; i++) { 
            if (seen.find(i) == seen.end()) {
                return i;  
            }
        }

        return -1; 
    }
};
