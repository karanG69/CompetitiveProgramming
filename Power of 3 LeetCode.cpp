class Solution {
public:
    bool helper(int n,int curr,int i){
        if(i>=n/3){
            return false;
        }
        if (curr>=INT_MAX/3){
            return false;
        }
        if (curr*3==n){
            return true;
        }
        return helper(n,curr*3,i+1);
    }
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        return helper(n,1,0);
    }
};
