#ifndef DFS_HPP
#define DFS_HPP

#include <vector>
#include <unordered_set>
#include "Graph.hpp"

class DFS {
public:
    static void dfsTraversalHelper(const Graph& graph, int node, 
                                    std::unordered_set<int>& visited, 
                                    std::vector<int>& result) {
        visited.insert(node);  
        result.push_back(node); 

        std::vector<int> neighbors = graph.getNeighbors(node);

        for (const auto& neighbor : neighbors) {
            if (visited.find(neighbor) == visited.end()) {  
                dfsTraversalHelper(graph, neighbor, visited, result);
            }
        }
    }

    static std::vector<int> dfsTraversal(const Graph& graph, int startNode) {
        std::unordered_set<int> visited;
        std::vector<int> result;

        dfsTraversalHelper(graph, startNode, visited, result);
        return result;
    }
};

#endif 
