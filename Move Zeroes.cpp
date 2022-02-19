// https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) swap(nums[i], nums[idx++]);
        }
     }
};