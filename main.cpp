#include "comm.h"
#include "iostream"
#include "string.h"
using namespace std;

int find_root(int x, int parent[]) {
    int root = x;
     
    while (parent[root] != -1) {
        root = parent[root];
    }

    return root;
}

int union_vertices(int x, int y, int parent[], int rank[]) {
    int x_root = find_root(x, parent);
    int y_root = find_root(y, parent);

    if (x_root != y_root) {
        if (rank[x_root] > rank[y_root]) {

        }
        return 1;
    } else {
        // 合并失败
        return 0;
    }
}

int main() {
    
    int vertices[5][2] = {{0, 1}, {1, 2}, {1, 3}, {3, 4}, {2, 5}};
    int parent[6];
    int rank[6];
    memset(parent, -1, sizeof(int) * 6);
    memset(rank, 0, sizeof(int) * 6);
    for (int i = 0; i < 5; i++) {
        union_vertices(vertices[i][0], vertices[i][1], parent, rank);
    }
    display(parent, 6);
    cout << "\n";
    return 0;
}