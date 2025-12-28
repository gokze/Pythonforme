class Solution(object):
    def countBits(self, n):
        ans=list()
        count=0
        for i in range(0,n+1):
            ans1=list(bin(i))
            ans1=ans1[2:]
            for j in range(0,len(ans1)):
                if(int(ans1[j])==1):
                    count+=1
            ans.append(count)
            count=0 
        return ans
        
