class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0){
            return 0;
        }
        int left=0,right=0,ans=0,currProd=1;
        while(right<nums.size()){
            currProd*=nums[right];
            while(left<=right && currProd>=k){
                currProd/=nums[left];
                left++;
            }
            ans+=right-left+1;
            right++;
        }
        return ans;
    }
};
