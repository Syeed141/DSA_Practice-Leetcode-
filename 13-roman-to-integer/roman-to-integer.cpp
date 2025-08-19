class Solution {
public:
    int romanToInt(string s) {

        unordered_map <char , int > roman ;

        roman['I'] = 1;
        roman['V'] = 5;
        roman ['X'] = 10;
        roman ['L'] = 50;
        roman ['C'] = 100;
        roman ['D'] = 500;
        roman['M']  = 1000;

        int ans = 0;
        int last = s.length()-1;

        for(int i = 0; i <s.length()-1;i++) {


            if(roman[s[i]]<roman[s[i+1]]) {

                ans = ans - roman[s[i]];
            }

            else {
                ans = ans + roman[s[i]];
            }

            
        }

        ans = ans + roman[s[last]];

        return ans;
        
    }
};