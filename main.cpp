#include "comm.h"
#include "iostream"
#include "tree.h"
#include "btree_to_exp.h"
using namespace std;

int main() {
    char arr[] = {'+', '*', '-', 'a', 'b', '#', '-', '#',
                  '#', '#', '#', 'c', 'd'};
    int n = sizeof(arr) / sizeof(char);
    Tree T;
    T = build_tree_level(arr, n);
    BtreeToExp(T, 0);
    return 0;
}