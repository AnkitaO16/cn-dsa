int level(BinaryTreeNode<int> *root, int node, int lev) {
  if (root == NULL)
    return 0;
  if (root->data == node)
    return lev;
  int left = level(root->left, node, lev + 1);
  if (left != 0)
    return left;
  return level(root->right, node, lev + 1);
}
bool isSibiling(BinaryTreeNode<int> *root, int p, int q) {
  if (root == NULL)
    return false;
  if (root->left && root->right) {
    if (root->left->data == p && root->right->data == q)
      return true;
    else if (root->left->data == q && root->right->data == p)
      return true;
  }
  if (root->left)
    if (isSibiling(root->left, p, q))
      return true;
  if (root->right)
    if (isSibiling(root->right, p, q))
      return true;
}
bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
  if ((level(root, p, 1) == level(root, q, 1)) && !(isSibiling(root, p, q)))
    return true;
  else
    return false;
}