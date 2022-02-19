// https://leetcode.com/problems/first-unique-character-in-a-string/
class Solution {
public:
    int firstUniqChar(string s) {
        vector freq(26, 0);
        for(char ch : s){
            freq[ch - 'a']++;
        }
        for(int i=0; i<s.size(); i++){
            if(freq[s[i]-'a']==1) return i;
        }
        return -1;
    }
};