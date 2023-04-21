class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        digit1=bin(x).replace("0b","")
        digit2=bin(y).replace("0b","")
        diff=max(len(digit1),len(digit2))-min(len(digit1),len(digit2))
        if len(digit1)>len(digit2):
            digit2=(diff*"0")+digit2
        elif len(digit2)>len(digit1):
            digit1=(diff*"0")+digit1
        ans=0
        for i in range(len(digit1)):
            if digit1[i]!=digit2[i]:
                ans+=1
        return ans
