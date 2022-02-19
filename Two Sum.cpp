// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(map.find(target-nums[i]) != map.end())
            {
                ans.push_back(map[target-nums[i]]);
                ans.push_back(i);
            }
            else{
                map[nums[i]] = i;
            }
        }
        return ans;
    }
};