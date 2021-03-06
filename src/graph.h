#ifndef GRAPH_H
#define GRAPH_H

typedef struct {
	int *data;
	int *vertex;
	int sity;
} Graph;

typedef struct {
	struct paths {
		int *vert;
	} *paths;
	int *buf_path;
	int ind_path;	
	int *ind_max_or_min_path;
	int count;
} Results;

Graph *graph_create(int num);
Results *results_create(Graph *g);
void graph_free(Graph *g);
int max_distance(Graph *g, int vertex1, int vertex2, Results *res);
int all_paths(int a, int b, Graph *g, Results *res);
void path_in_graph(int a, int b, Graph *g, int mass[], int z, Results *res);
void create_all_path(Results *res, Graph *g);
int max_sum(Graph *g, Results *res);
void free_max_or_min_paths(Results *res);
int min_distance(Graph *g, int vertex1, int vertex2, Results *res);
int min_sum(Graph *g, Results *res);
void results_free(Results *res);

#endif
