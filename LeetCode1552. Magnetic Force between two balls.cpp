class Solution {
public:
    bool ifPossible(int gap,vector<int> position,int m){
        int ballsRemaining=m-1;
        int lastPlaced=0;
        for(int i=1; i<position.size() && ballsRemaining>0; i++){
            if(position[i]-position[lastPlaced]>=gap){
                lastPlaced=i;
                ballsRemaining--;
            }
        }
        return ballsRemaining==0;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int left=1;
        int right=position[position.size()-1]-position[0];    
        int ans=1;
        while(left<=right){
            int mid=(left+right)/2;
            if(ifPossible(mid,position,m)){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
    }
};
