class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_zero=0;
        int count_one=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count_zero++;
            }
            else if(nums[i]==1){
                count_one++;
            }
        }
        for(int i=0;i<count_zero;i++){
            nums[i]=0;
        }
        for(int i=count_zero;i<count_zero+count_one;i++){
            nums[i]=1;
        }
        for(int i=count_zero+count_one;i<nums.size();i++){
            nums[i]=2;
        }

    }
};
