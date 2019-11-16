#ifndef NODE_H
#define NODE_H

typedef struct Node node;

int lookup(node*, int target);
node* new_node(int data);
node* insert(node* n, int data);
void print_nodes_with_order(node* n, int order);
void print_nodes_preorder(node* n);
int count_nodes(node* n);
void assign_data(node* n, int data);
int get_data(node* n);
void free_nodes(node* n);

#endif // NODE_H
