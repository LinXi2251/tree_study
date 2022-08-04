
#ifndef _DISJOIN_H
#define _DISJOIN_H

int find_root(int x, int parent[]);
int union_vertices(int x, int y, int parent[], int rank[]);
void disjoin_set_test();
#endif