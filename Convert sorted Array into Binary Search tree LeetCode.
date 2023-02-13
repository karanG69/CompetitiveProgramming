class Solution {
public:
    TreeNode* BuildTree(vector<int> &nums,int start,int end){
        if(start>end){
            return NULL;
        }
        int mid =(start+end)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=BuildTree(nums,start,mid-1);
        root->right=BuildTree(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0){
            return NULL;
        }
        return BuildTree(nums,0,nums.size()-1);
    }
};
