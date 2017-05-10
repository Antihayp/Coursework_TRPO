#ifndef GRAPH_H
#define GRAPH_H
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *data;
	int *vertex;
	int sity;
} Graph;

Graph *graph_create(int n);
void graph_free(Graph *g);
int get_item(int i, int j, Graph *g);
int max_distance(Graph *g, int vertex1, int vertex2);
int all_paths(int a, int b, Graph *g);
int path_in_graph(int index, int a, int b, Graph *g, int mass[]);

#endif
