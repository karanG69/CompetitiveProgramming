class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        ans=0
        nums.sort()
        i=0
        while i<len(nums):
            if i%2==0:
                ans+=nums[i]
                i+=1
            i+=1
        return ans
