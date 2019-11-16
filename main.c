#include <stdio.h>
#include <stdlib.h>

#include "node.h"

int main(int argc, char** argv) {

	if (argc < 2) {
		printf("No arguments supplied for tree insertion.\n");
		return 1;
	}

	struct node* tree = insert(NULL, atoi(argv[1]));

	for (int i=2; i < argc; i++) {
		insert(tree, atoi(argv[i]));
	}

	int test = lookup(tree, atoi(argv[2]));
	printf("%d %d\n", test, atoi(argv[2]));

	return 0;
}
