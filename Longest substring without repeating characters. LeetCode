class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_sof=0
        str1=""
        i=0
        while i<len(s):
            if s[i] not in str1:
                str1+=s[i]
                i+=1
            else:
                if max_sof<len(str1):
                    max_sof=len(str1)
                str1=""
                temp=s[i]
                while i>=0 and s[i-1] not in temp:
                    temp+=s[i-1]
                    i-=1
        if max_sof<len(str1):
            max_sof=len(str1)
        return max_sof
