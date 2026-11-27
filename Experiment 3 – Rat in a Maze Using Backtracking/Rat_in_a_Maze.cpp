#include <iostream>
#include <vector>
using namespace std;

// Check whether the current cell is valid
bool isSafe(const vector<vector<int>>& maze,
            int x, int y, int n) {

    return x >= 0 && x < n &&
           y >= 0 && y < n &&
           maze[x][y] == 1;
}

// Solve maze using backtracking
bool solveMaze(const vector<vector<int>>& maze,
               vector<vector<int>>& solution,
               int x, int y, int n) {

    // Check whether the position is valid
    if (!isSafe(maze, x, y, n)) {
        return false;
    }

    // Mark current cell as part of the path
    solution[x][y] = 1;

    // Check whether destination is reached
    if (x == n - 1 && y == n - 1) {
        return true;
    }

    // Move down
    if (solveMaze(maze, solution, x + 1, y, n)) {
        return true;
    }

    // Move right
    if (solveMaze(maze, solution, x, y + 1, n)) {
        return true;
    }

    // Backtrack
    solution[x][y] = 0;

    return false;
}

// Display a matrix
void display(const vector<vector<int>>& matrix,
             int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}

int main() {

    int n;

    cout << "Enter size of maze: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid maze size.\n";
        return 1;
    }

    vector<vector<int>> maze(
        n, vector<int>(n)
    );

    vector<vector<int>> solution(
        n, vector<int>(n, 0)
    );

    cout << "Enter maze matrix (0 or 1):\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    cout << "\nOriginal Maze:\n";
    display(maze, n);

    if (solveMaze(maze, solution, 0, 0, n)) {

        cout << "\nSolution Path:\n";
        display(solution, n);

        cout << "\nDestination reached successfully.\n";
    }
    else {
        cout << "\nNo path exists.\n";
    }

    return 0;
}


Sample input
4
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1


5. Sample output
Enter size of maze: 4
Enter maze matrix (0 or 1):
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1

Original Maze:
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1
