class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int min_len=strs[0].size();
        for(int k=0;k<strs.size();k++){
            min_len = min(min_len,(int)strs[k].size());
        }
        bool match = true;
        for(int j=0;j<min_len;j++){
            match = true;
            for(int i=0;i<strs.size();i++){
                if(strs[i][j]==strs[0][j]){

                }
                else{
                    match = false;
                    break;
                }
            }
            if(match==true){
                ans+=strs[0][j];
            }
            else{
                break;
            }
        }


        return ans;

    }
    
};