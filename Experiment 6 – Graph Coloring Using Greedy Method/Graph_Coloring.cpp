#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Greedy Graph Coloring function
void greedyColoring(const vector<vector<int>>& graph,
                    int n) {

    // Initially, all vertices are uncolored
    vector<int> color(n, -1);

    // Assign the first color to vertex 0
    color[0] = 0;

    // Track unavailable colors
    vector<bool> unavailable(n, false);

    // Assign colors to remaining vertices
    for (int u = 1; u < n; u++) {

        // Reset unavailable colors
        fill(unavailable.begin(),
             unavailable.end(), false);

        // Check colors of adjacent vertices
        for (int v = 0; v < n; v++) {

            if (graph[u][v] == 1 &&
                color[v] != -1) {

                unavailable[color[v]] = true;
            }
        }

        // Find the smallest available color
        int c;

        for (c = 0; c < n; c++) {

            if (!unavailable[c])
                break;
        }

        // Assign color to current vertex
        color[u] = c;
    }

    int totalColors = 0;

    cout << "\nGraph Coloring Result:\n";
    cout << "Vertex\tColor\n";

    for (int i = 0; i < n; i++) {

        cout << i << "\t"
             << color[i] + 1 << endl;

        totalColors = max(totalColors,
                          color[i] + 1);
    }

    cout << "\nTotal Colors Used: "
         << totalColors << endl;
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

            if (graph[i][j] != 0 &&
                graph[i][j] != 1) {

                cout << "Enter only 0 or 1.\n";
                return 1;
            }
        }
    }

    // Validate the graph
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

    greedyColoring(graph, n);

    return 0;
}


Sample input
5
0 1 1 0 0
1 0 1 1 0
1 1 0 1 1
0 1 1 0 1
0 0 1 1 0


 Sample output

Enter number of vertices: 5
Enter adjacency matrix:
0 1 1 0 0
1 0 1 1 0
1 1 0 1 1
0 1 1 0 1
0 0 1 1 0

Graph Coloring Result:
Vertex  Color
0       1
1       2
2       3
3       1
4       2

Total Colors Used: 3
