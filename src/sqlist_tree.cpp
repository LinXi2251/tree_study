#include "sqlist_tree.h"
#include "comm.h"
void pre_order(Sqlist tree, int root) {
    if (root < tree.num && tree.data[root] != -1) {
        int left = root * 2 + 1;
        int right = root * 2 + 2;
        cout << tree.data[root] << "\t";
        
        if (left < tree.num && tree.data[left] != -1) {
            pre_order(tree, left);
        }
        if (right < tree.num && tree.data[right] != -1) {
            pre_order(tree, right);
        }
    }
}



void in_order(Sqlist tree, int root) {
    if (root < tree.num && tree.data[root] != -1) {
        int left = root * 2 + 1;
        int right = root * 2 + 2;
    
        if (left < tree.num && tree.data[left] != -1) {
            pre_order(tree, left);
        }
        cout << tree.data[root] << "\t";
        if (right < tree.num && tree.data[right] != -1) {
            pre_order(tree, right);
        }
    }
}

void post_order(Sqlist tree, int root) {
    if (root < tree.num && tree.data[root] != -1) {
        int left = root * 2 + 1;
        int right = root * 2 + 2;
        
        
        if (left < tree.num && tree.data[left] != -1) {
            pre_order(tree, left);
        }
        if (right < tree.num && tree.data[right] != -1) {
            pre_order(tree, right);
        }
        cout << tree.data[root] << "\t";
    }
}