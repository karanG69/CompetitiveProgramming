class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if len(word)==0:
            return True
        if word[0].isupper():
            count=1
            for i in range (len(word)):
                if word[i].isupper():
                    count+=1
            if count==2 or count==len(word)+1:
                return True
            else:
                return False
        else:
            count=0
            for i in range(len(word)):
                if word[i].isupper():
                    count+=1
            if count==0:
                return True
            else:
                return False
