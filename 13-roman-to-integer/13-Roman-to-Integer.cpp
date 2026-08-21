class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char, int>Roman = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        for(int i=0;i<s.size()-1;i++){
            if(Roman[s[i]]<Roman[s[i+1]]){
                ans=ans-Roman[s[i]];
            }
            else{
                ans=ans+Roman[s[i]];
            }
        }
        ans=ans+Roman[s[s.size()-1]];
        return ans;
        
    }
};