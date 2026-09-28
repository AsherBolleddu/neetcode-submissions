class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        j=0
        i=1
        while i < len(nums):
            if nums[j] == nums[i]:
                i += 1
            else:
                j += 1
                nums[j] = nums[i]
        return j+1
            
                
