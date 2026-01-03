class Solution(object):
    def reverseVowels(self, s):
        i=0
        s=list(s)
        j=len(s)-1
        temp=0
        while i<j:
            if s[i].lower() in 'aeiou' and s[j].lower() in 'aeiou':
                temp=s[i]
                s[i]=s[j]
                s[j]=temp
                i+=1
                j-=1
            elif s[i].lower() in'aeiou':
                j-=1
            elif s[j].lower() in 'aeiou':
                i+=1
            else:
                i+=1
                j-=1
        return ''.join(s)
