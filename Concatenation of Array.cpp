// https://leetcode.com/problems/concatenation-of-array/
// SC: O(n)
// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(2*n);
        
//         for(int i=0; i<n; i++){
//             ans[i] = nums[i];
//             ans[i+n] = nums[i];
//         }
//         return ans;
//     }
// };

// SC: O(1)
// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         int n = nums.size();
        
//         for(int i=0; i<n; i++){
//             nums.push_back(nums[i]);
//         }
//         return nums;
//     }
// };

// vector insert function
// SC: O(1)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;
    }
};