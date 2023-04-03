class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        hash_m={}
        hash_m['0']=0
        hash_m['1']=1
        hash_m['2']=2
        hash_m['3']=3
        hash_m['4']=4
        hash_m['5']=5
        hash_m['6']=6
        hash_m['7']=7
        hash_m['8']=8
        hash_m['9']=9
        r_num1=num1[::-1]
        r_num2=num2[::-1]
        ans=0
        count=1
        for i in r_num1:
            temp=0
            carry=0
            place=1
            for j in r_num2:
                num=(hash_m[i]*hash_m[j])+carry
                if num<=9:
                    temp+=num*place
                    carry=num//10
                else:
                    carry=(num//10)
                    temp+=num%10*(place)
                place*=10
            temp+=carry*place
            ans+=count*temp
            count*=10
        return str(ans)
