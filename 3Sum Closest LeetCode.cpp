class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min_diff=INT_MAX;
        int sum;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size()-2;i++){
            int start=i+1;
            int end=nums.size()-1;
            while (start<end){
                int temp=nums[i]+nums[start]+nums[end];
                if(temp==target){
                    return temp;
                }
                else if (temp<target){
                    if((target-temp)<min_diff){
                        min_diff=target-temp;
                        sum=temp;
                    }
                    start++;
                }
                else{
                    if((temp-target)<min_diff){
                        min_diff=temp-target;
                        sum=temp;
                    }
                    end--;
                }
            }
        }
        return sum;
    }
};
