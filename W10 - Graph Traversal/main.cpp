#include <iostream>
#include <vector>
#include "Graph.hpp"
#include "DFS.hpp"
#include "BFS.hpp"

int main() {
    // Create the graph with 6 nodes 
    Graph graph(6);
    
    // Add nodes (using numbers)
    graph.addNode(0); // Node 0
    graph.addNode(1); // Node 1
    graph.addNode(2); // Node 2
    graph.addNode(3); // Node 3
    graph.addNode(4); // Node 4
    graph.addNode(5); // Node 5
    
    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 5);
    graph.addEdge(4, 5);
    
    // BFS traversal (starting from node 0)
    BFS bfs;
    std::vector<int> bfsResult = bfs.bfsTraversal(graph, 0);
    std::cout << "BFS Traversal Order: ";
    for (const auto& node : bfsResult) {
        std::cout << node << " ";
    }
    std::cout << std::endl;
    
    // DFS traversal (starting from node 0)
    DFS dfs;
    std::vector<int> dfsResult = dfs.dfsTraversal(graph, 0);
    std::cout << "DFS Traversal Order: ";
    for (const auto& node : dfsResult) {
        std::cout << node << " ";
    }
    std::cout << std::endl;

    return 0;
}
