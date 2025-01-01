# Graph Traversal Using DFS and BFS
## Introduction
Graph traversal algorithms are essential for exploring graphs in various applications, such as network routing, social networks, and pathfinding. This project implements two commonly used graph traversal techniques:

Depth-First Search (DFS): Explores as far as possible along each branch before backtracking.
Breadth-First Search (BFS): Explores all nodes at the present depth level before moving on to nodes at the next depth level.
## Graph Class
The graph is initialized with a specified number of nodes.
Nodes are represented by integers, starting from 0.
The adjacency list stores each node’s neighbors as a linked list of integers.
### DFS Traversal
DFS starts from a given node and explores as deep as possible along a branch before backtracking. The result is a list of nodes in the order they were visited.
### BFS Traversal
BFS starts from a given node and explores all its neighbors at the current depth level before moving to the next level. The result is a list of nodes in the order they were visited.
### Example
 ```mathematica
    example graph:
    Nodes: 0, 1, 2, 3, 4, 5
    Edges:
    0 -> 1, 2
    1 -> 3, 4
    2 -> 5
    4 -> 5
    
 BFS Traversal:
    Starting from node 0
    the BFS traversal order is:
    BFS Traversal Order: 0 1 2 3 4 5
  

 DFS Traversal:
    Starting from node 0
    the DFS traversal order is:
    DFS Traversal Order: 0 1 3 4 5 2
     ```
