#include "btree_to_exp.h"

#include "comm.h"
void BtreeToExp(TreeNode* root, int deep) {
    if (!root)
        return;
    else if (!root->left && !root->right) {
        cout << root->val;
    } else {
        if (deep > 0) printf("(");
        BtreeToExp(root->left, deep+1);
        cout << root->val;
        BtreeToExp(root->right, deep+1);
        if (deep > 0) printf(")");
    }
}