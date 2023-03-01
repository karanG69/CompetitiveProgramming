class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sof=INT_MIN;
        int max_sum=0;
        for(int i=0;i<nums.size();i++){
            max_sum+=nums[i];
            max_sof=max(max_sum,max_sof);
            if(max_sum<0){
                max_sum=0;
            }
        }
        return max_sof;
    }
};
