class Solution(object):
    def findDisappearedNumbers(self, nums):
        n = len(nums)

        # Mark seen numbers by making indices negative
        for i in range(n):
            index = abs(nums[i]) - 1
            if nums[index] > 0:
                nums[index] = -nums[index]

        # Collect indices that are still positive
        result = []
        for i in range(n):
            if nums[i] > 0:
                result.append(i + 1)

        return result
