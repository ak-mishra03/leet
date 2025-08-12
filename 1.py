class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for index,n in enumerate(nums):
            if n in map:
                return [index,map[n]]
            map[target-n] = index
