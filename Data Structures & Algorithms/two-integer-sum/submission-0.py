class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # for i in range(len(nums)):
        #     for j in range(len(nums)):
        #         if i == j:
        #             continue
        #         if nums[i] + nums[j] == target:
        #             return [i, j]

        dct = {}
        for i in range(len(nums)):
            if nums[i] in dct:
                return [dct[nums[i]], i]
            diff = target - nums[i]
            dct[diff] = i

            
                