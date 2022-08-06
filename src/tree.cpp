#include "tree.h"
#include "comm.h"

void pre_order(Tree root) {
    if (root) {
        cout << root->val << "\t";
        pre_order(root->left);
        pre_order(root->right);
    }
}