// https://leetcode.com/problems/intersection-of-two-arrays-ii/

// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         if(nums1.size() > nums2.size()) return intersect(nums2, nums1);
        
//         unordered_map<int, int> map;
//         for(auto n : nums1) map[n]++;
        
//         int k=0;
//         for(auto n : nums2){
//             auto it = map.find(n);
//             if(it != map.end() && --it->second >= 0){
//                 nums1[k++] = n;
//             }
//         }
//         return vector(begin(nums1), begin(nums1)+k);
//     }
// };

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        
        int i=0, j=0, k=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] < nums2[j]) i++;
            else if(nums1[i] > nums2[j]) j++;
            else {
                nums1[k++] = nums1[i++];
                j++;
            }
        }
        return vector(begin(nums1), begin(nums1)+k);
    }
};