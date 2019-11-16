#ifndef NODE_H
#define NODE_H

typedef struct Node node;

int lookup(node*, int target);
node* new_node(int data);
node* insert(node* n, int data);
void print_nodes(node* tree);
int count_nodes(node* n);
void assign_data(node* n, int data);
int get_data(node* n);

#endif // NODE_H
