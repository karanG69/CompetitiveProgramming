class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        ans=[]
        i=0
        if len(nums)==1:
            ans.append(str(nums[i]))
        while i<len(nums)-1:
            a=nums[i]
            while i<len(nums)-1 and nums[i+1]-nums[i]==1:
                i+=1
            b=nums[i]
            if a==b:
                ans.append(str(nums[i]))
            else:
                ans.append(str(a)+"->"+str(b))
            i+=1
            if i==len(nums)-1:
                ans.append(str(nums[i]))
        return ans
