#ifndef NODE_H
#define NODE_H

typedef struct node node;

int lookup(node*, int target);
node* new_node(int data);
node* insert(node* n, int data);

#endif // NODE_H
