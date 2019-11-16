#include <stdio.h>
#include <stdlib.h>

#include "node.h"

int main(int argc, char** argv) {

	if (argc < 2) {
		printf("No arguments supplied for tree insertion.\n");
		return 1;
	}

	node* tree = insert(NULL, atoi(argv[1]));

	for (int i=2; i < argc; i++) {
		int data = atoi(argv[i]);
		// don't need to save the tree pointer again
		insert(tree, data);
	}

	for (int j=1; j < argc; j++) {
		printf(
			"Arg %d = %s in tree? %d\n",
			j, argv[j], lookup(tree, atoi(argv[j]))
		);
	}

	int num_nodes = count_nodes(tree);
	printf("Number of nodes = %d\n", num_nodes);
	free_nodes(tree);

	return 0;
}
