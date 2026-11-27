#include <iostream>
#include <vector>
using namespace std;

int n;

vector<vector<int>> graph;
vector<int> path;
vector<bool> visited;

// Bounding function
bool isFeasible(int current) {

    // Every unvisited vertex must have at
    // least two possible neighbors
    for (int u = 0; u < n; u++) {

        if (!visited[u]) {

            int degree = 0;

            for (int v = 0; v < n; v++) {

                if (graph[u][v] &&
                    (!visited[v] ||
                     v == current || v == 0)) {

                    degree++;
                }
            }

            // Prune an infeasible branch
            if (degree < 2)
                return false;
        }
    }

    return true;
}

// Find Hamiltonian Cycle
bool hamiltonianCycle(int pos) {

    int current = path[pos - 1];

    // Check whether the cycle is complete
    if (pos == n) {
        return graph[current][0] == 1;
    }

    // Apply bounding condition
    if (!isFeasible(current))
        return false;

    // Branch over possible vertices
    for (int v = 1; v < n; v++) {

        if (graph[current][v] &&
            !visited[v]) {

            path[pos] = v;
            visited[v] = true;

            if (hamiltonianCycle(pos + 1))
                return true;

            // Remove unsuccessful choice
            visited[v] = false;
            path[pos] = -1;
        }
    }

    return false;
}

int main() {

    cout << "Enter number of vertices: ";
    cin >> n;

    if (n < 3) {
        cout << "At least 3 vertices are required.\n";
        return 1;
    }

    graph.resize(n, vector<int>(n));
    path.resize(n, -1);
    visited.resize(n, false);

    cout << "Enter adjacency matrix:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cin >> graph[i][j];

            if (graph[i][j] != 0 &&
                graph[i][j] != 1) {

                cout << "Enter only 0 or 1.\n";
                return 1;
            }
        }
    }

    // Validate simple undirected graph
    for (int i = 0; i < n; i++) {

        if (graph[i][i] != 0) {
            cout << "Self-loops are not allowed.\n";
            return 1;
        }

        for (int j = 0; j < n; j++) {

            if (graph[i][j] != graph[j][i]) {
                cout << "Graph must be undirected.\n";
                return 1;
            }
        }
    }

    // Start from vertex 0
    path[0] = 0;
    visited[0] = true;

    if (hamiltonianCycle(1)) {

        cout << "\nHamiltonian Cycle exists.\n";

        cout << "Hamiltonian Cycle: ";

        for (int i = 0; i < n; i++) {
            cout << path[i] << " -> ";
        }

        cout << "0" << endl;
    }
    else {
        cout << "\nHamiltonian Cycle does not exist.\n";
    }

    return 0;
}



 Sample input
5
0 1 0 1 0
1 0 1 1 1
0 1 0 0 1
1 1 0 0 1
0 1 1 1 0


 Sample output
Enter number of vertices: 5
Enter adjacency matrix:
0 1 0 1 0
1 0 1 1 1
0 1 0 0 1
1 1 0 0 1
0 1 1 1 0

Hamiltonian Cycle exists.
Hamiltonian Cycle: 0 -> 1 -> 2 -> 4 -> 3 -> 0
