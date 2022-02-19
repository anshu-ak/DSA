// https://leetcode.com/problems/reverse-string/
class Solution {
public:
    void helper(vector<char>& s, int l, int r){
        if(l>=r) return;
        int temp = s[l];
        s[l++] = s[r];
        s[r--] = temp;
        helper(s, l, r);
    }
    
public:
    void reverseString(vector<char>& s) {
        helper(s, 0, s.size()-1);
    }
};