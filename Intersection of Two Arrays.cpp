// https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
    
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        
        vector<int> ans;
        
        for(auto i : s2){
            if(s1.find(i) != s1.end()){
                ans.push_back(i);
                s1.erase(i);
            }
        }
        return ans;
        
    }
};