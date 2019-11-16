#! /usr/bin/env python3

import sys


class Node(object):
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right


def insert_node(node, data):
    if not(node):
        return Node(data)

    else:
        if data <= node.data:
            node.left = insert_node(node.left, data)

        else:
            node.right = insert_node(node.right, data)

    return node


def lookup(node, target):
    if not(node):
        return False

    else:
        if target == node.data:
            return True
        elif target < node.data:
            return lookup(node.left, target)
        else:
            return lookup(node.right, target)


tree = Node(int(sys.argv[1]))

for val in sys.argv[2:]:
    # tree = insert_node(tree, int(val))
    insert_node(tree, int(val))

for val in sys.argv[1:]:
    print(lookup(tree, int(val)))
