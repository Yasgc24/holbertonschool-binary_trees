# Binary Trees
### Project Details


![](https://kevinvecmanis.io/assets/binary_trees/tree2.png)

#### Description

What students should learn from this project

-     What is a binary tree
-     What is the difference between a binary tree and a Binary Search Tree
-     What is the possible gain in terms of time complexity compared to linked lists
-     What are the depth, the height, the size of a binary tree
-     What are the different traversal methods to go through a binary tree
-     What is a complete, a full, a perfect, a balanced binary tree

#### EnvironmentEnvironment

Ubuntu 20.04 LTS


#### Data Structures

    /**
     * struct binary_tree_s - Binary tree node
     *
     * @n: Integer stored in the node
    * @parent: Pointer to the parent node
     * @left: Pointer to the left child node
     * @right: Pointer to the right child node
     */
    struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
    };

    typedef struct binary_tree_s binary_tree_t;

#### Binary Search Tree

    typedef struct binary_tree_s bst_t;


#### AVL Tree

    typedef struct binary_tree_s avl_t;

#### Max Binary Heap

    typedef struct binary_tree_s heap_t;

#### Print function

To match the examples in the tasks, you are given this function This function is used only for visualisation purpose. You don't have to push it to your repo. It may not be used during the correction

### Tasks

#### [0. New node mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/0-binary_tree_node.c "0. New node mandatory")

Write a function that creates a binary tree node:

- Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
- Where parent is a pointer to the parent node of the node to create
- And value is the value to put in the new node
- When created, a node does not have any child
- Your function must return a pointer to the new node, or NULL on failure

#### [1. Insert left mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/1-binary_tree_insert_left.c "1. Insert left mandatory")

Write a function that inserts a node as the left-child of another node:

- Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
- Where parent is a pointer to the node to insert the left-child in
- And value is the value to store in the new node
- Your function must return a pointer to the created node, or NULL on failure
- If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

#### [2. Insert right mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/2-binary_tree_insert_right.c "2. Insert right mandatory")

Write a function that inserts a node as the right-child of another node:

- Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
- Where parent is a pointer to the node to insert the right-child in
- And value is the value to store in the new node
- Your function must return a pointer to the created node, or NULL on failure
- If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

#### [3. Delete mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/3-binary_tree_delete.c "3. Delete mandatory")

Write a function that deletes an entire binary tree:

- Prototype: void binary_tree_delete(binary_tree_t *tree);
- Where tree is a pointer to the root node of the tree to delete

#### [4. Is leaf mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/4-binary_tree_is_leaf.c "4. Is leaf mandatory")

Write a function that checks if a node is a leaf:

- Prototype: int binary_tree_is_leaf(const binary_tree_t *node);
- Where node is a pointer to the node to check
- Your function must return 1 if node is a leaf, and 0 otherwise
- If node is NULL, return 0

#### [5. Is root mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/5-binary_tree_is_root.c "5. Is root mandatory")

Write a function that checks if a given node is a root:

- Prototype: int binary_tree_is_root(const binary_tree_t *node);
- Where node is a pointer to the node to check
- Your function must return 1 if node is a root, and 0 otherwise
- If node is NULL, return 0

#### [6. Pre-order traversal mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/6-binary_tree_preorder.c "6. Pre-order traversal mandatory")

Write a function that goes through a binary tree using pre-order traversal:

- Prototype: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
- Where tree is a pointer to the root node of the tree to traverse
- And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.

#### [7. In-order traversal mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/7-binary_tree_inorder.c "7. In-order traversal mandatory")

Write a function that goes through a binary tree using in-order traversal:

- Prototype: void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
- Where tree is a pointer to the root node of the tree to traverse
- And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.

#### [8. Post-order traversal mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/8-binary_tree_postorder.c "8. Post-order traversal mandatory")

Write a function that goes through a binary tree using post-order traversal:

- Prototype: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
- Where tree is a pointer to the root node of the tree to traverse
- And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.

#### [9. Height mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/9-binary_tree_height.c "9. Height mandatory")

Write a function that measures the height of a binary tree:

- Prototype: size_t binary_tree_height(const binary_tree_t *tree);
- Where tree is a pointer to the root node of the tree to measure the height of
- If tree is NULL, your function must return 0

#### [10. Depth mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/10-binary_tree_depth.c "10. Depth mandatory")

Write a function that measures the depth of a node in a binary tree:

- Prototype: size_t binary_tree_depth(const binary_tree_t *node);
- Where tree is a pointer to the node to measure the depth of
- If node is NULL, your function must return 0

#### [11. Size mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/11-binary_tree_size.c "11. Size mandatory")

Write a function that measures the size of a binary tree:

- Prototype: size_t binary_tree_size(const binary_tree_t *tree);
- Where tree is a pointer to the root node of the tree to measure the size of

#### [12. Leaves mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/12-binary_tree_leaves.c "12. Leaves mandatory")

Write a function that counts the leaves in a binary tree:

- Prototype: size_t binary_tree_leaves(const binary_tree_t *tree);
- Where tree is a pointer to the root node of the tree to count the leaves in
- A NULL pointer is not a leaf

#### [13. Nodes mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/13-binary_tree_nodes.c "13. Nodes mandatory")

Write a function that counts the nodes with at least 1 child in a binary tree:

- Prototype: size_t binary_tree_nodes(const binary_tree_t *tree);
- Where tree is a pointer to the root node of the tree to count the nodes in
- A NULL pointer is not a node

#### [14. Balance factor mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/14-binary_tree_balance.c "14. Balance factor mandatory")

Write a function that measures the balance factor of a binary tree:

- Prototype: int binary_tree_balance(const binary_tree_t *tree);
- Where tree is a pointer to the root node of the tree to measure the balance factor of
- If tree is NULL, return 0

#### [15. Is full mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/15-binary_tree_is_full.c "15. Is full mandatory")

Write a function that checks if a binary tree is full:

- Prototype: int binary_tree_is_full(const binary_tree_t *tree);
- Where tree is a pointer to the root node of the tree to check
- If tree is NULL, your function must return 0

#### [16. Is perfect mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/16-binary_tree_is_perfect.c "16. Is perfect mandatory")

Write a function that checks if a binary tree is perfect:

- Prototype: int binary_tree_is_perfect(const binary_tree_t *tree);
- Where tree is a pointer to the root node of the tree to check
- If tree is NULL, your function must return 0

#### [17. Sibling mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/17-binary_tree_sibling.c "17. Sibling mandatory")

Write a function that finds the sibling of a node:

- Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node);
- Where node is a pointer to the node to find the sibling of
- Your function must return a pointer to the sibling node
- If node has no sibling, return NULL

#### [18. Uncle mandatory](https://github.com/Yasgc24/holbertonschool-binary_trees/blob/master/18-binary_tree_uncle.c "18. Uncle mandatory")

Write a function that finds the uncle of a node:

- Prototype: binary_tree_t *binary_tree_uncle(binary_tree_t *node);
- Where node is a pointer to the node to find the uncle of
- Your function must return a pointer to the uncle node
- If node has no uncle, return NULL

## Authors:

#### [Eduardo Zúñiga](https://github.com/edwardzuniga/ "Eduardo Zúñiga")
#### [Yasmin Giraldo](https://github.com/Yasgc24/ "Yasmin Giraldo")
