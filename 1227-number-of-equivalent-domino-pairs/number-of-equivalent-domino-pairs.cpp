class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {

        map <pair<int,int>,int> mp;

        for(auto domino : dominoes) {

            pair <int,int> d = make_pair(domino[0],domino[1]);

            if(d.first<d.second) {

                swap(d.first,d.second);

            }

            mp[d]++;


        }

        int ans = 0;

        for(auto data : mp) {

            ans += data.second * (data.second -1)/2;

        }

        return ans;
        
    }
};