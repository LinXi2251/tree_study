

#ifndef _SQLIST_TREE_H
#define _SQLIST_TREE_H
typedef struct Sqlist {
    int* data;
    int num;
    Sqlist(int* x, int n) : data(x), num(n) {}
} Sqlist;

void pre_order(Sqlist tree, int root);
void in_order(Sqlist tree, int root);
void post_order(Sqlist tree, int root);
#endif