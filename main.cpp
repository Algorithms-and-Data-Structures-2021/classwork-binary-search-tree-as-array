#include <iostream>
#include <vector>

#include "binary_search_tree.hpp"
#include "traversal_algorithm.hpp"

using namespace std;
using namespace itis;

static vector<Node *> treeAsVector(const BinarySearchTree &tree) {
  vector<Node *> array_tree;
  return array_tree;
}

int main(int argc, char **argv) {

  BinarySearchTree tree;

  tree.Insert(8);
  tree.Insert(3);
  tree.Insert(10);
  tree.Insert(1);
  tree.Insert(6);
  tree.Insert(4);
  tree.Insert(7);
  tree.Insert(14);
  tree.Insert(13);

  tree.Traverse(BreadthFirstTraversalAlgorithm{});

  const auto tree_as_vector = treeAsVector(tree);

  for (const auto* node: tree_as_vector) {
    cout << node->key << '\n';
  }

  return 0;
}