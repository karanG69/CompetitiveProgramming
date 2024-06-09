class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_index=-1,max_index=-1;
        int maximum=INT_MIN;
        int minimum=INT_MAX;
        int n=nums.size();

        int left=0;
        int right=n-1;
        while(left<=right){
            if(nums[left]<nums[right]){
                if(minimum>nums[left]){
                    minimum=nums[left];
                    min_index=left;
                }
                if(maximum<nums[right]){
                    maximum=nums[right];
                    max_index=right;
                }
            }
            else{
                if(maximum<nums[left]){
                    maximum=nums[left];
                    max_index=left;
                }
                if(minimum>nums[right]){
                    minimum=nums[right];
                    min_index=right;
                }
            }
            left++;
            right--;
        }
        if(maximum==minimum){
            return min(min_index+1,n-min_index);
        }
        else{
            int case1=max(max_index,min_index)+1;
            int case2=n-min(max_index,min_index);
            int case3=(min(max_index,min_index)+1) + (n-max(max_index,min_index));
            if(case1<=case2){
                return min(case1,case3);
            }
            else{
                return min(case2,case3);
            }
        }
    }
};
