class Solution(object):
    def reverseVowels(self, s):
        vowels=list()
        for i in s:
            if i.lower()=='a' or i.lower()=='e' or i.lower()=='i' or i.lower()=='o'or i.lower()=='u':
                vowels.append(i)
        vowels=vowels[-1::-1]
        s=list(s)
        v=0
        for i in range(0,len(s)):
            if s[i].lower()=='a' or s[i].lower()=='e' or s[i].lower()=='i' or s[i].lower()=='o' or s[i].lower()=='u':
                s[i]=vowels[v]
                v+=1
        return ''.join(s)
