class Solution(object):
    def buildArray(self, target, n):
        ops = list()
        j = 0  
        for num in range(1, n + 1):
            if j >= len(target):
                break  
            ops.append("Push")
            if num == target[j]:
                j += 1  
            else:
                ops.append("Pop") 
        return ops
