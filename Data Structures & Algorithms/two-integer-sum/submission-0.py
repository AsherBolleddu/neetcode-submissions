class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums_dict = {}
        for i in range(len(nums)):
            temp = target - nums[i]
            if temp not in nums_dict:
                nums_dict[nums[i]] = i
            else:
                return [nums_dict[temp], i]