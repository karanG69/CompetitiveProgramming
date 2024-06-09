class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mymap;
        int prefSum=0,ans=0;
        mymap[0]=1;
        for(int i=0;i<nums.size();i++){
            prefSum+=nums[i];
            int mod=prefSum%k;
            if (mod<0) mod+=k;
            if(mymap.find(mod)!=mymap.end()){
                ans+=mymap[mod];
            }
            mymap[mod]++;
        }
        return ans;
    }
};
