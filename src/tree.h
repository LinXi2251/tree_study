
#ifndef _TREE_H
#define _TREE_H
#include "iostream"
typedef struct TreeNode {
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char _val) { val = _val, left = NULL, right = NULL; };
} *Tree;

void pre_order(Tree root);

#endif