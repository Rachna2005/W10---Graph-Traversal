#ifndef BFS_HPP
#define BFS_HPP

#include <iostream>
#include <queue>
#include <unordered_set>
#include <vector>
#include "Graph.hpp"

class BFS {
public:
    static std::vector<int> bfsTraversal(const Graph& graph, int startNode) {
        std::unordered_set<int> visited;
        std::queue<int> toVisit;
        std::vector<int> result;

        toVisit.push(startNode);
        visited.insert(startNode);

        while (!toVisit.empty()) {
            int currentNode = toVisit.front();
            toVisit.pop();
            result.push_back(currentNode);

            for (const auto& neighbor : graph.getNeighbors(currentNode)) {
                if (visited.find(neighbor) == visited.end()) {
                    toVisit.push(neighbor);
                    visited.insert(neighbor);
                }
            }
        }

        return result;
    }
};

#endif 
