# https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        n = len(nums)
        
        if n == 0:
            return 0
        
        i = 0
        
        for j in range(1,n):
            if nums[i]!=nums[j]:
                i+=1
                nums[i] = nums[j]
                
        return i+1
        