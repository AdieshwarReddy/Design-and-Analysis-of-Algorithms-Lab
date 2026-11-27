#include <iostream>
#include <vector>
using namespace std;

// Check whether a queen can be placed safely
bool isSafe(const vector<vector<int>>& board,
            int row, int col, int n) {

    // Check the column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1)
            return false;
    }

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1;
         i >= 0 && j >= 0; i--, j--) {

        if (board[i][j] == 1)
            return false;
    }

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1;
         i >= 0 && j < n; i--, j++) {

        if (board[i][j] == 1)
            return false;
    }

    return true;
}

// Solve N-Queens using backtracking
bool solveNQueens(vector<vector<int>>& board,
                  int row, int n) {

    // All queens are successfully placed
    if (row == n)
        return true;

    // Try placing a queen in every column
    for (int col = 0; col < n; col++) {

        if (isSafe(board, row, col, n)) {

            // Place the queen
            board[row][col] = 1;

            // Place queen in the next row
            if (solveNQueens(board, row + 1, n))
                return true;

            // Backtrack by removing the queen
            board[row][col] = 0;
        }
    }

    return false;
}

// Display the chessboard
void display(const vector<vector<int>>& board,
             int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }

        cout << endl;
    }
}

int main() {

    int n;

    cout << "Enter number of queens: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of queens.\n";
        return 1;
    }

    vector<vector<int>> board(
        n, vector<int>(n, 0)
    );

    if (solveNQueens(board, 0, n)) {

        cout << "\nSolution Chessboard:\n";
        display(board, n);

        cout << "\nAll queens placed successfully.\n";
    }
    else {
        cout << "\nNo solution exists.\n";
    }

    return 0;
}



Sample input
4


 Sample output
Enter number of queens: 4

Solution Chessboard:
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0

All queens placed successfully.


6. OUTPUT.md
File path: 04_N_Queens/OUTPUT.md
# Experiment 4: N-Queens Problem Output

## Test Case 1: Four Queens

### Input

Number of Queens: 4

### Expected Output

    Solution Chessboard:
