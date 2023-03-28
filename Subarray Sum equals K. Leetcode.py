class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        count=0
        prev_sum={}
        curr_sum=0
        i=0
        while i<len(nums):
            curr_sum+=nums[i]
            if curr_sum-k==0:
                count+=1
            if curr_sum-k in prev_sum:
                count+=prev_sum[curr_sum-k]
            if curr_sum in prev_sum:
                prev_sum[curr_sum]+=1
            else:
                prev_sum[curr_sum]=1
            i+=1
        return count
