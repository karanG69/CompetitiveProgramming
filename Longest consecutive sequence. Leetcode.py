class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums)==1:
            return 1
        nums.sort()
        ans=0
        i=0
        while i<len(nums)-1:             
            count=1
            curr=i
            while i<len(nums)-1:
                if nums[i+1]-nums[i]==1:
                    count+=1
                    i+=1
                elif nums[i+1]-nums[i]==0:
                    i+=1
                else:
                    break
            if i==curr:
                i+=1
            if ans<count:
                ans=count
        return ans
