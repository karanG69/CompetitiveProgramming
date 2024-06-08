class Solution {
public:
    bool check(vector<int>& nums) {
        int x=-1;
        int i=1;
        while(i<nums.size() && nums[i]>=nums[i-1]){
            i++;
        }
        if(i==nums.size()){
            return true;
        }
        else{
            if(nums[0]<nums[nums.size()-1]){
                return false;
            }
            x=i;
        }
        for(i=x+1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                return false;
            }
        }
        return true;
    }
};
