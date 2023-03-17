class Solution {
public:
    int searchPos(vector<int>& inorder,int start,int end,int curr){
        for(int i=start;i<=end;i++){
            if(inorder[i]==curr){
                return i;
            }
        }
        return -1;
    }
    TreeNode* BuildTree(vector<int>& inorder, vector<int>& postorder,int start ,int end){
        static int indx=postorder.size()-1;
        if (end<0 || start>=postorder.size()){
            return NULL;
        }
        else if( start>end ){
            return NULL;
        }
        int curr= postorder[indx];
        indx--;
        TreeNode* root=new TreeNode(curr);
        if (start==end){
            return root;
        }
        int pos=searchPos(inorder,start,end,curr);
        root->right=BuildTree(inorder,postorder,pos+1,end);
        root->left=BuildTree(inorder,postorder,start,pos-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return BuildTree(inorder,postorder,0,inorder.size()-1);
    }
};
