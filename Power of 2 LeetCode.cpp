class Solution {
public:
    bool helper(int n,int curr,int i){
        if(i>=int(n/2) || curr>=n){
            return false;
        }
        if (curr>=INT_MAX/2){
            return false;
        }
        if (curr*2==n){
            return true;
        }
        return helper(n,curr*2,i+1);
        
}
    bool isPowerOfTwo(int n) {
        if(n%2!=0){
            if (n==1){
                return true;
            }
            return false;
        }
        return helper(n,1,0);
    }
};
