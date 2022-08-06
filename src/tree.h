
#ifndef _TREE_H
#define _TREE_H
#include "iostream"
typedef struct TreeNode {
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char _val) { val = _val, left = NULL, right = NULL; };
} *Tree;

Tree build_tree_level(char vals[], int n);
void pre_order(Tree root);
void in_order(Tree root);
void post_order(Tree root);
int get_hight(Tree root);
#endif