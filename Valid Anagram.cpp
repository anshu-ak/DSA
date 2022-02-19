// https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> cnt(26, 0);
        for(int i=0; i<s.size(); i++){
            cnt[s.at(i)-'a']++;
            cnt[t.at(i)-'a']--;
        }
        cout << cnt[0] << endl;
        for(auto c : cnt) {
            if(c!=0) return false;
        }
        return true;
    }
};