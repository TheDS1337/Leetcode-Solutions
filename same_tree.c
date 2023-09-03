/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode *p, struct TreeNode *q)
{
    if( p != NULL && q != NULL ) {
        if( p->val == q->val ) {
            bool same_left = true, same_right = true;

            if( p->left != NULL && q->left != NULL )
                same_left = isSameTree(p->left, q->left);
            else if( (p->left == NULL && q->left != NULL) || (p->left != NULL && q->left == NULL) )
                return false;

            if( p->right != NULL && q->right != NULL )
                same_right = isSameTree(p->right, q->right);
            else if( (p->right == NULL && q->right != NULL) || (p->right != NULL && q->right == NULL) )
                return false;

            return same_left && same_right;
        }
    } else if( p == NULL && q == NULL )
        return true;

    return false;
}
