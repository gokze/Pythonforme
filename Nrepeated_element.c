class Solution(object):
    def repeatedNTimes(self, nums):
        repeated=list()
        for i in nums:
            if i not in repeated:
                repeated.append(i)
            else:
                return i
