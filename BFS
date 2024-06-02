#include <iostream>
#include <vector>
#include <queue>

using namespace std;
//هنمشي علي الرسمه ونحدد كل نود و الي متصلين بيها
//مع العلم انا ببدأ بنود 1 احط جواها الارقام بتاعتها وهكذا

vector<int> bfs(vector<vector<int>> graph, int start) {
    vector<bool> visited(graph.size(), false); // Initialize visited vector  // "الي بحط جواه كل قيمه لونها بقا رمادي بترو زي فيديوو عادل نسيم"
    queue<int> q; // Queue to manage nodes to be explored //الي بدخل فيه كل قيمه لحد ما اخد كل ارقامها واعملها بوب
    vector<int> traversal; // Vector to store the BFS traversal order //اخر فيكتور خالص الي بيأكد اني عديت عليهم كلهم واستخدمت ارقامهم فلقا لونهم اسود
//start from zero to 10 "knowing that 0 no data inside it"
    visited[start] = true; // Mark the start node as visited (color it gray)
    q.push(start); // Enqueue the start node

    while (!q.empty())
     {
         // Loop until there are no more nodes to explore
        int current = q.front(); // Get the front node in the queue
        q.pop(); // Remove the front node from the queue
        traversal.push_back(current); // Add the current node to the traversal list "color it black"

        // Loop through all neighbors of the current node
        for (int neighbor : graph[current]) 
        {
            // If the neighbor has not been visited yet
            if (!visited[neighbor])
             {
                visited[neighbor] = true; // Mark the neighbor as visited (color it gray)
                q.push(neighbor); // Enqueue the neighbor node for further exploration
            }
            //if I have take it I don't do this if so I skip this part
        }
    }

    return traversal; // Return the BFS traversal order
}

int main() {
    vector<vector<int>> graph = {
        {},            // Node 0 (not used, so empty)
        {2, 4},        // Node 1
        {1, 3, 5, 7, 8},  // Node 2
        {2, 9, 10, 4}, // Node 3
        {1, 3},        // Node 4
        {2, 7, 6, 8},  // Node 5
        {5},           // Node 6
        {5, 8, 2},     // Node 7
        {2, 7, 5},     // Node 8
        {3},           // Node 9
        {3, 4}         // Node 10
    };

    // Perform BFS starting from node 1
    vector<int> traversal = bfs(graph, 1);

    // Output the BFS traversal order
    //add 1 and start : 
    //node 1 will take 2 , 4
 //node 4 will take 3                   // node 2 will take 5 , 7, 8    
 //node 3 will take 9 , 10              //node 5 will take 6 
    //so output will be : 1 2 4 3 5 7 8 9 10 6 
    for (int node : traversal) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
