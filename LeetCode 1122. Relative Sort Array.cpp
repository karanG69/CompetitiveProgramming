class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mymap1;
        unordered_map<int,int> mymap2;
        for(int i=0;i<arr1.size();i++){
            mymap1[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            mymap2[arr2[i]]++;
        }
        vector<int> intersection;
        for(const auto& pair : mymap1){
            if(mymap2.find(pair.first)==mymap2.end()){
                for(int j=1;j<=pair.second;j++){
                    intersection.push_back(pair.first);
                }
            }
        }
        sort(intersection.begin(),intersection.end());
        vector<int> ans;
        for(int i=0;i<arr2.size();i++){
            for(int j=1;j<=mymap1[arr2[i]];j++){
                ans.push_back(arr2[i]);
            }
        }
        for(int i=0;i<intersection.size();i++){
            ans.push_back(intersection[i]);
        }
        return ans;
    }
};
