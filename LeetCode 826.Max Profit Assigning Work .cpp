class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                            vector<int>& worker) {
        int ans=0;
        for(int i=0;i<difficulty.size()-1;i++){
            for(int j=0;j<difficulty.size()-1-i;j++){
                if(difficulty[j]>difficulty[j+1]){
                    int temp1=difficulty[j];
                    int temp2=profit[j];
                    difficulty[j]=difficulty[j+1];
                    profit[j]=profit[j+1];
                    difficulty[j+1]=temp1;
                    profit[j+1]=temp2;
                }
            }
        }
        sort(worker.begin(),worker.end());
        int max_profit=0;
        int j=0;
        for(int i=0;i<worker.size();i++){
            while(j<difficulty.size() && difficulty[j]<=worker[i]){
                max_profit=max(max_profit,profit[j]);
                j++;
            }
            ans+=max_profit;
        }
        return ans;
    }
};
