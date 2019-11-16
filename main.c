#include <stdio.h>
#include <stdlib.h>

#include "node.h"

int main(int argc, char** argv) {

	if (argc < 2) {
		printf("No arguments supplied for tree insertion.\n");
		return 1;
	}

	node* tree = insert(NULL, atoi(argv[1]));
	printf("init tree = %d\n", get_data(tree));

	for (int i=2; i < argc; i++) {
		int data = atoi(argv[i]);
		tree = insert(tree, data);
		printf("%d %d %d\n", i, data, get_data(tree));
	}

	int test = lookup(tree, atoi(argv[2]));
	printf("%d %d\n", test, atoi(argv[2]));
	// free(tree);

	int num_nodes = count_nodes(tree);
	printf("%d\n", num_nodes);
	free_nodes(tree);

	node* test_tree = NULL;
	printf("%d\n", count_nodes(test_tree));

	return 0;
}
