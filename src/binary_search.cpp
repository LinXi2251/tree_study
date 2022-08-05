#include "binary_search.h"
#include "comm.h"
#include "tree.h"
int pre = -1;
int is_T = 1;
void inorder_binary_tree(Sqlist tree, int root) {
    if (root < tree.num && tree.data[root] != -1) {
        int left = root * 2 + 1;
        int right = root * 2 + 2;
        
        if (left < tree.num && tree.data[left] != -1) {
            inorder_binary_tree(tree, left);
        }
        cout << "current = " << tree.data[root] << "\n";
        cout << "pre = " << pre << "\n";
        if (pre > tree.data[root]) {
            is_T = 0;
            return;
        }
        pre = tree.data[root];
        
        cout << "============" << "\n";
        
        if (right < tree.num && tree.data[right] != -1) {
            inorder_binary_tree(tree, right);
        }
    }
}
int is_binary_tree(Sqlist tree) {
    inorder_binary_tree(tree, 0);
    return is_T;
}