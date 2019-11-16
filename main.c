#include <stdio.h>
#include <stdlib.h>

#include "node.h"

int main(int argc, char** argv) {
	struct node* n = new_node(10);
	int test = lookup(n, 9);
	struct node* tree = insert(NULL, 10);
	test = lookup(tree, 10);
	printf("%d\n", test);
	free(n);
}
