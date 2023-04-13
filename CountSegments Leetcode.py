class Solution:
    def countSegments(self, s: str) -> int:
        listt=[]
        i=0
        j=0
        while j<len(s):
            while j<len(s) and s[j]!=" ":
                j+=1
            if " " not in s[i:j] and len(s[i:j])>0:
                listt.append(s[i:j])
            j+=1
            i=j
        return len(listt)
