class Solution:
    def subArraySum(self,arr, n, s): 
        ans=[]
        start=0
        end=-1
        pre={}
        currSum=0
        for i in range(n):
            currSum+=arr[i]
            if (currSum-s==0):
                ans.append(1)
                ans.append(i+1)
                return ans
               
            elif currSum-s in pre:
                start=pre[currSum-s]+2
                end=i+1
                ans.append(start)
                ans.append(end)
                return ans
            pre[currSum]=i
        ans.append(end)
        return ans
