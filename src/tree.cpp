#include "tree.h"
#include <queue>
#include "comm.h"
/**
 * @brief 层次建立树，#代表为空 满二叉树的形式
 *
 * @param vals
 * @param n
 * @return Tree
 */
Tree build_tree_level(char vals[], int n) {
    queue<TreeNode*> Q;
    if (vals[0] == '#') return NULL;
    TreeNode* root = new TreeNode(vals[0]);
    Q.push(root);
    int i = 0;
    while (!Q.empty()) {
        TreeNode* node = Q.front();
        Q.pop();

        if (++i >= n || vals[i] == '#') {
            node->left = NULL;
        } else {
            node->left = new TreeNode(vals[i]);
            Q.push(node->left);
        }

        if (++i >= n || vals[i] == '#') {
            node->right = NULL;
        } else {
            node->right = new TreeNode(vals[i]);
            Q.push(node->right);
        }
    }
    return root;
}

void pre_order(Tree root) {
    if (root) {
        cout << root->val << "\t";
        pre_order(root->left);
        pre_order(root->right);
    }
}
void in_order(Tree root) {
    if (root) {
        
        in_order(root->left);
        cout << root->val << "\t";
        in_order(root->right);
    }
}
void post_order(Tree root) {
    if (root) {
        
        post_order(root->left);
        post_order(root->right);
        cout << root->val << "\t";
    }
}

int find_max(int i, int j) {
    return (i > j) ? i : j;
}

int get_hight(Tree root) {
    if (root == NULL) return 0;
    return find_max(get_hight(root->left), get_hight(root->right)) + 1;
}

