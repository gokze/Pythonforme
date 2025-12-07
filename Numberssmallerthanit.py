class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        out=list()
        count=0
        for i in range(0,len(nums)):
            for j in range(0,len(nums)):
                if(nums[i]>nums[j]):
                    count+=1
            print(count)
            out.append(count)
            count=0
        return out

        
