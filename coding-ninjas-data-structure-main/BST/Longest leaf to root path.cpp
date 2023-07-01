#include <bits/stdc++.h>
using namespace std;
int height(BinaryTreeNode<int>* root){
    if(root == NULL)
        return 0;
    return 1 + max(height(root->left),height(root->right));
}
vector<int>* longestPath(BinaryTreeNode<int>* root) {
    if(root->left == NULL && root->right == NULL){
        vector<int> *v = new vector<int>();
        v->push_back(root->data);
        return v;
    }
    int left = 0;
    int right = 0;
    if(root->left)
        left = height(root->left);
    if(root->right)
        right = height(root->right);
    if(left>right){
      vector<int> *v = longestPath(root->left);
      v->push_back(root->data);
      return v;
    }
    else{
      vector<int> *v = longestPath(root->right);
      v->push_back(root->data);
      return v;
    }
}