#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <unordered_map>
#include <algorithm>
#include "Node.hpp"

class Graph {
public:
    Graph(int nodesCount) {
        adjacencyList.resize(nodesCount, nullptr);
    }

    void addNode(int nodeValue) {
        nodeValues.push_back(nodeValue);
    }

    void addEdge(int source, int destination) {
        Node* newNode = new Node(destination);
        int sourceIndex = std::distance(nodeValues.begin(),
                                        std::find(nodeValues.begin(), nodeValues.end(), source));
        newNode->next = adjacencyList[sourceIndex];
        adjacencyList[sourceIndex] = newNode;
    }

    std::vector<int> getNeighbors(int node) const {
        std::vector<int> neighbors;
        int nodeIndex = std::distance(nodeValues.begin(),
                    std::find(nodeValues.begin(), nodeValues.end(), node));

        Node* current = adjacencyList[nodeIndex];
        while (current) {
            neighbors.push_back(current->data);
            current = current->next;
        }

        std::sort(neighbors.begin(), neighbors.end());
        return neighbors;
    }

private:
    std::vector<Node*> adjacencyList;
    std::vector<int> nodeValues;
};

#endif 
