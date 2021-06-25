void preorder(struct node* root)
{
    if(root == NULL) return;
    printf("%d->",root->data);
    preorder(root->left);
    preorder(root->right);
}
