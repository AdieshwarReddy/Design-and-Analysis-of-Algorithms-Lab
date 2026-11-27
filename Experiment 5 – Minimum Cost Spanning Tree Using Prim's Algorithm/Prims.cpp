#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Find the unselected vertex with minimum key
int minKey(const vector<int>& key,
           const vector<bool>& selected,
           int n) {

    int minimum = INT_MAX;
    int index = -1;

    for (int i = 0; i < n; i++) {

        if (!selected[i] && key[i] < minimum) {
            minimum = key[i];
            index = i;
        }
    }

    return index;
}

// Prim's Algorithm
void prims(const vector<vector<int>>& graph,
           int n) {

    vector<int> parent(n, -1);
    vector<int> key(n, INT_MAX);
    vector<bool> selected(n, false);

    // Start from vertex 0
    key[0] = 0;

    for (int count = 0; count < n; count++) {

        int u = minKey(key, selected, n);

        // Check whether the graph is disconnected
        if (u == -1) {
            cout << "\nGraph is disconnected.\n";
            cout << "Minimum Spanning Tree does not exist.\n";
            return;
        }

        selected[u] = true;

        // Update adjacent vertices
        for (int v = 0; v < n; v++) {

            if (graph[u][v] != 0 &&
                !selected[v] &&
                graph[u][v] < key[v]) {

                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    long long totalCost = 0;

    cout << "\nMinimum Spanning Tree:\n";
    cout << "Edge\tWeight\n";

    for (int i = 1; i < n; i++) {

        cout << parent[i] << " - " << i
             << "\t" << graph[parent[i]][i]
             << endl;

        totalCost += graph[parent[i]][i];
    }

    cout << "\nMinimum Cost: "
         << totalCost << endl;
}

int main() {

    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of vertices.\n";
        return 1;
    }

    vector<vector<int>> graph(
        n, vector<int>(n)
    );

    cout << "Enter adjacency matrix:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    // Validate undirected graph
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (graph[i][j] != graph[j][i]) {
                cout << "Graph must be undirected.\n";
                return 1;
            }
        }
    }

    prims(graph, n);

    return 0;
}


Sample input
5
0 2 0 6 0
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 0


5. Sample output
Enter number of vertices: 5
Enter adjacency matrix:
0 2 0 6 0
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 0

Minimum Spanning Tree:
Edge    Weight
0 - 1   2
1 - 2   3
0 - 3   6
