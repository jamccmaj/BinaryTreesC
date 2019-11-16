#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node * left;
	struct node * right;
} node ;

int lookup(node* n, int target) {
	if (n == NULL) {
		return 0;
	} else {
		if (target == n->data) {
			return 1;
		} else {
			if (target < n->data) {
				return lookup(n->left, target);
			}
			else {
				return lookup(n->right, target);
			}
		}
	}
}

node* new_node(int data) {
	node* n = malloc(sizeof(node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}

node* insert(node* n, int data) {
	if (n == NULL) {
		return new_node(data);
	} else {
		if (data <= n->data) {
			return insert(n->left, data);
		} else {
			return insert(n->right, data);
		}
	}
}

// int main(int argc, char** argv) {
// 	struct node* n = new_node(10);
// 	int test = lookup(n, 9);
// 	struct node* tree = insert(NULL, 10);
// 	test = lookup(tree, 10);
// 	printf("%d\n", test);
// 	free(n);
// }
