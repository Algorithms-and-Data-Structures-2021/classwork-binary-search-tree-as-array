#include <iostream>
#include <queue>
#include <vector>

#include "binary_search_tree.hpp"
#include "traversal_algorithm.hpp"

using namespace std;
using namespace itis;

static void treeAsVector(int node_id, Node *node, vector<Node *> &tree) {

  if (node == nullptr) {
    return;
  }

  const int left_child_id = node_id * 2 + 1;

  if (left_child_id >= tree.size()) {
    return;
  }

  tree[left_child_id] = node->left;
  tree[left_child_id + 1] = node->right;

  treeAsVector(left_child_id, node->left, tree);
  treeAsVector(left_child_id + 1, node->right, tree);
}

static vector<Node *> treeAsVector(const BinarySearchTree &tree) {
  vector<Node *> array_tree(tree.size(), nullptr);

  array_tree[0] = tree.root();
  treeAsVector(0, tree.root(), array_tree);

  return array_tree;
}

int main(int argc, char **argv) {

  BinarySearchTree tree;

  tree.Insert(8);
  tree.Insert(10);
  tree.Insert(11);
  tree.Insert(12);
  tree.Insert(13);

  tree.Traverse(BreadthFirstTraversalAlgorithm{});
  cout << endl;

  const auto tree_as_vector = treeAsVector(tree);

  for (const auto *node : tree_as_vector) {
    if (node != nullptr) {
      cout << "Node: " << node->key << endl;
    } else {
      cout << "Node: nullptr" << endl;
    }
  }

  return 0;
}