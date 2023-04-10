class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        wordsInS=[]
        i=0
        while i<len(s):
            temp=""
            while i<len(s) and s[i]!=' ':
                temp+=s[i]
                i+=1
            wordsInS.append(temp)
            i+=1
        if len(wordsInS)!=len(pattern):
           return False
        hash_m={}
        hash_s={}
        i=0
        while i<len(pattern):
            if pattern[i] not in hash_s:
                hash_s[pattern[i]]=wordsInS[i]
            else:
                if hash_s[pattern[i]]!=wordsInS[i]:
                    return False
                
            if wordsInS[i] not in hash_m:
                hash_m[wordsInS[i]]=pattern[i]
            else:
                if hash_m[wordsInS[i]]!=pattern[i]:
                    return False
            i+=1
        return True
                

