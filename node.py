#! /usr/bin/env python3

import sys


class Node(object):
    instance_count = 0

    def __init__(self, data, left=None, right=None):
        Node.instance_count += 1
        self.data = data
        self.left = left
        self.right = right
        self.id = Node.instance_count


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


if len(sys.argv) < 2:
    sys.exit(1)

tree = Node(int(sys.argv[1]))

for val in sys.argv[2:]:
    insert_node(tree, int(val))

for val in sys.argv[1:]:
    print(lookup(tree, int(val)))


def print_nodes_with_order(node, order="pre"):
    if order == "pre":
        print(node.id, node.data)

    if node.left:
        print_nodes_with_order(node.left, order)

    if order == "in":
        print(node.id, node.data)

    if node.right:
        print_nodes_with_order(node.right, order)

    if order == "post":
        print(node.id, node.data)


print("preoder")
print_nodes_with_order(tree, order="pre")
print("inorder")
print_nodes_with_order(tree, order="in")
print("postoder")
print_nodes_with_order(tree, order="post")
