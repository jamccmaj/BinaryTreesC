#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node * left;
	struct Node * right;
} node ;

int get_data(node* n) {
	return n->data;
}

void assign_data(node* n, int data) {
	n->data = data;
}

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
			n->left = insert(n->left, data);
		} else {
			n->right = insert(n->right, data);
		}
	}
	return n;
}

void free_nodes(node* n) {
	if (n == NULL) {
		return;
	}

	free_nodes(n->left);
	free_nodes(n->right);
	free(n);
}

int is_leaf(node* n) {
	return n->left == NULL && n->right == NULL;
}

void print_nodes(node* tree) {
	if (tree == NULL) {
		return;
	} else {
		// continue from here
		return;
	}
}

int count_nodes(node* n) {
	if (n->left != NULL) {
		return count_nodes(n->left) + 1;
	} else {
		if (n->right != NULL) {
			return count_nodes(n->right) + 1;
		} else {
			return 1;
		}
	}
}
