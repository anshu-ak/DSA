// https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for(int i=1; i<strs.size(); i++){
            int j;
            for(j=0; j<strs[i].size(); j++){
                if(res[j] != strs[i][j])
                    break;
            }
            res = res.substr(0, j);
            if(res == "")
                return res;
        }
        return res;
    }
};