class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        h_map={}
        h_map["0"]=0
        h_map["1"]=1
        h_map["2"]=2
        h_map["3"]=3
        h_map["4"]=4
        h_map["5"]=5
        h_map["6"]=6
        h_map["7"]=7
        h_map["8"]=8
        h_map["9"]=9
        i=len(num1)-1
        j=len(num2)-1
        ans=""
        carry=0
        while i>=0 and j>=0:
            summ=h_map[num1[i]]+h_map[num2[j]]+carry
            if summ>9:
                ans+=str(summ%10)
                carry=1
            else:
                ans+=str(summ)
                carry=0
            i-=1
            j-=1
        while i>=0:
            summ=h_map[num1[i]]+carry
            if summ>9:
                ans+=str(summ%10)
                carry=1
            else:
                ans+=str(summ)
                carry=0
            i-=1
        while j>=0:
            summ=h_map[num2[j]]+carry
            if summ>9:
                ans+=str(summ%10)
                carry=1
            else:
                ans+=str(summ)
                carry=0
            j-=1
        if carry==1:
            ans+="1"
        return ans[::-1]
