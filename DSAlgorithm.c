/**
2014年算法题（二叉树叶结点带权路径之和）
**/

1)wpl值=数中所有叶结点的带权路径长度
      =根结点左子树全部叶结点的带权路径长度+根结点右子树全部叶结点的带权路径长度
所以所求的wpl值为所有叶结点乘以深度d+1，即依次向上递归遍历二叉树，若遍历到叶结点，则返回该结点的带权路径长度，否则返回其左右子树的带权路径长度之和
2）typedef struct node{
    int weight;
    struct node *left,*right;
}BTree;

3）int WPL(BTree *root){
  int w_l,w_r;
  if(root->right==NULL&&root->left==Null) return 0;
  else{
    w_l = WPL(root->left);
    w_r = WPL(root->right);
    root->weight=root->left->weight+root->right->weight;
    return(w_l+w_r+root->weight);
  }
}


/**
2017年算法题（中序遍历输出）
**/

1)可以基于二叉树的中序遍历实现，需要在生成遍历序列的同时，在适当的位置添加必要的括号，显然，表达式的最外层（根结点）和操作数（叶结点）不需要添加括号。遍历左子树前加上左括号，遍历右子树后加上右括号
2）void BtreeToE(Btree *root){
  BtreeToExp(root,1);
}
void BtreeToExp(Btree *node,deep){
  if(root==NULL) return；
  else if(root->left==NULL&&root->right==NULL)
    printf("&d",root->data);
  else{
    if(deep>1) printf("(");
    BtreeToExp(root->left,deep+1);
    printf("&d",root->data);
    BtreeToExp(root->right,deep+1);
    if(deep>1) print(")");
  }
}
