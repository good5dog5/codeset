#include<iostream>
#include<vector>

using namespace std;
struct TreeNode {
    int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSymmetric(TreeNode* root) {

    if (root == NULL) return true;
    return isSym(root->left, root->right);
    
}
bool isSym(TreeNode * left, TreeNode * right)
{
    if (left == NULL)
        return right == NULL;

    if (right == NULL)
        return left == NULL;

    if (left->val != right->val)
        return false;

    if (!isSym(left->left, right->right))
        return false;

    if (!isSym(left->right, right->left))
        return false;
    return true;

}
int main(void)
{
    return 0;
}

