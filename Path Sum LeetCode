class Solution {
public:
    bool helper(TreeNode* &root,int target){
        if (root==NULL){
            return false;
        }
        if (root->left==NULL && root->right==NULL){
            if(root->val-target==0){
                return true;
            }
        }
        bool Left=helper(root->left,target-root->val);
        bool Right=helper(root->right,target-root->val);
        return Left||Right;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,targetSum);
    }
};
