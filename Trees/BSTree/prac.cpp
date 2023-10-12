bool searchInBst(b* root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data>data){
        return searchInBst(root->left,data);
    }
    if(root->data<data){
        return searchInBst(root->right,data);
    }
    return true;
}