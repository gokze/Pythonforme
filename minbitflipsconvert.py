class Solution(object):
    def minBitFlips(self, start, goal):
        a=bin(start)
        b=bin(goal)
        print(a,b)
        a=a[2::1]
        b=b[2::1]
        if(len(a)!=len(b)):
            if(len(a)>len(b)):
                for i in range(0,len(a)-len(b)):
                    b="0"+b
            else:
                for i in range(0,len(b)-len(a)):
                    a="0"+a
        print(a,b)
        i=len(a)-1
        c=0
        while(i>=0):
            if((a[i])!=(b[i])):
                c+=1
            i-=1
        return c
        
