二叉树先序、中序、后序遍历算法（递归）



/**
先序遍历（递归）
*/

void  preorderbinartree(Node *root){
  if(root==NULL) return;
  printf("%d",root->data);            //访问数据
  preorderbinartree(root->left);      //访问左子树
  preorderbinarytree(root->right);    //访问右子树
}


/**
中序遍历（递归）
*/

void  inorderbinartree(Node *root){
  if(root==NULL) return;
  inorderbinartree(root->left);      //访问左子树
  printf("%d",root->data);            //访问数据
  inorderbinarytree(root->right);    //访问右子树
}





/**
后序遍历（递归）
*/

void  postorderbinartree(Node *root){
  if(root==NULL) return;
  postorderbinartree(root->left);      //访问左子树
  postorderbinarytree(root->right);    //访问右子树
  printf("%d",root->data);            //访问数据
}
