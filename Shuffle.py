class Solution(object):
    def shuffle(self, nums, n):
        ans=list()
        k=n
        for i in range(0,n):
            ans.append(nums[i])
            ans.append(nums[k])
            k+=1
        return ans
        
