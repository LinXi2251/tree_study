#include "binary_search.h"
#include "tree.h"
#include "comm.h"
#include "iostream"
using namespace std;

int main() {
    int arr[] = {5, 2, 7, 1, 4, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    Sqlist tree(arr, n);
    int ans = is_binary_tree(tree);
    cout << "ans: " << ans << endl;
    return 0;
}