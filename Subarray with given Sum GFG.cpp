vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> ans;
        int start=0;
        int end=-1;
        unordered_map <int,int> pre;
        int currSum=0;
        for (int i=0;i<arr.size();i++){
            currSum+=arr[i];
            if (currSum-s==0){
                ans.push_back(1);
                ans.push_back(i+1);
                return ans;
            }
            else if (pre.count(currSum-s)>0){
                start=pre[currSum-s]+2;
                end=i+1;
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
            pre.insert({currSum,i});
        }
        ans.push_back(end);
        return ans;
    }
