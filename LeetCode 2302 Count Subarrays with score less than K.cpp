class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int left=0,right=0;
        long long currScore=0,currSum=0,ans=0;
        while(right<nums.size()){
            currSum+=nums[right];
            currScore=currSum*(right-left+1);
            while(currScore>=k){
                currSum-=nums[left];
                left++;
                currScore=currSum*(right-left+1);
            }
            ans+=right-left+1;
            right++;
        }
        return ans;

    }
};
