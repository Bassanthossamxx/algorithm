#include <iostream>
#include <vector>
#include <stack>
#include <algorithm> 
using namespace std;

// Depth-First Search (DFS) function
void DFS(int start,vector<vector<int>> adj) 
{
    vector<bool> visited(adj.size(), false); // Vector to keep track of visited vertices, initially all set to false "color it gray when i vist it"
    stack<int> stack; // Stack to perform DFS traversal "colored black when  I use all there edges"

    stack.push(start); // Push the start
    
    while (!stack.empty()) { 
        int current = stack.top(); // Get the top element of the stack to use it and put in traversal
        stack.pop(); // Pop 

        if (!visited[current]) { 
            // If the popped vertex is not visited
            cout << current << " "; // Print the vertex
            visited[current] = true; // Mark the vertex as visited "to not print it again"
            vector<int> neighbors = adj[current]; // Get the neighbors of the current vertex "next edge"
            sort(neighbors.rbegin(), neighbors.rend()); // Sort the neighbors in descending order

            for (int i : neighbors) {
                if (!visited[i]) { // If the neighbor is not visited
                    stack.push(i); // Push the neighbor onto the stack "new node to print"
                }
            }
        }
    }
}

int main() {
    int vertices = 8; // Number of vertices in the graph
    vector<vector<int>> adj(vertices + 1); // Adjacency list representing the graph
    adj[1] = {2, 3, 4, 5};
    adj[2] = {1, 6};
    adj[3] = {1, 6};
    adj[4] = {1, 7};
    adj[5] = {1, 7};
    adj[6] = {2, 3, 8};
    adj[7] = {4, 5, 8};
    adj[8] = {6, 7};

    cout << "DFS traversal of the given graph is: ";
    DFS(1, adj); // Perform DFS traversal starting from vertex 1   
    return 0;
}
