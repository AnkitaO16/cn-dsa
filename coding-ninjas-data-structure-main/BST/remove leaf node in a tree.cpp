TreeNode<int>* removeLeafNodes(TreeNode<int>* root) {
    if(root==NULL)
         return NULL;
    if(root->numChildren()==0){
        delete root;
        return NULL;
    }
    for(int i=0;i<root->numChildren();i++){
        TreeNode<int>*child=root->getChild(i);
        if(child->numChildren()==0){
            root->removeChild(i);
            i--;
        }
		else
            root->setChild(i,removeLeafNodes(child));
    }
    return root;
}