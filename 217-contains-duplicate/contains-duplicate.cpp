class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,bool> umap;

        for(auto x : nums) {

            if(umap[x]) return true;
            umap[x] = true;

        }

        return false;
    }
};