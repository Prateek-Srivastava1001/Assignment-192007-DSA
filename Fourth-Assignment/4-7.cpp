bool isValidBST(TreeNode* root) {
        if(root->left!=NULL&&root->val<=root->left->val)
            return false;
        if(root->right!=NULL&&root->val>=root->right->val)
            return false;
        if(!isValidBST(root->left))
            return false;
        if(!isValidBST(root->right))
            return false;
        
        return true;
    }