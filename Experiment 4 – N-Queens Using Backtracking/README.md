
# Experiment 4: N-Queens Using Backtracking

## Aim

To implement the N-Queens problem using
the Backtracking approach in C++.

## Theory

The N-Queens problem is a classical
constraint satisfaction problem in which
N queens must be placed on an N x N
chessboard such that no two queens
attack each other.

Two queens must not occupy the same:

- Row
- Column
- Diagonal

Backtracking is used to explore possible
queen placements and eliminate invalid
configurations.

## Backtracking Approach

1. Place a queen in a safe position.
2. Move to the next row.
3. Check possible positions in that row.
4. If no safe position exists, return
   to the previous row.
5. Remove the previously placed queen.
6. Try another available position.
7. Repeat until a valid solution is found.

## Algorithm

1. Start the program.
2. Read the number of queens N.
3. Initialize an N x N chessboard with zeros.
4. Start placing queens from the first row.
5. Check whether the selected position is safe.
6. If safe, place the queen.
7. Recursively place a queen in the next row.
8. If the recursive call fails, remove the queen.
9. Try the next available column.
10. If all queens are placed, return true.
11. Display the solution chessboard.
12. If no solution exists, display an error message.
13. Stop the program.

## Board Representation

- 0 represents an empty position.
- 1 represents a queen.

## Time Complexity

- Search space: O(N!) candidate placements.
- Safety checking: O(N) per attempted position.
- A conservative upper bound for this
  implementation is O(N^2 * N!).

## Space Complexity

- Chessboard: O(N^2)
- Recursion Stack: O(N)
- Total Auxiliary Space: O(N^2)

## Advantages

- Eliminates invalid configurations early.
- Systematically explores possible solutions.
- Demonstrates recursive problem solving.
- Suitable for constraint satisfaction problems.

## Disadvantages

- Requires factorial-scale search in the worst case.
- Execution becomes expensive for large N.
- Recursive calls introduce additional overhead.

## Applications

- Constraint satisfaction problems
- Resource allocation
- Scheduling problems
- Puzzle solving
- Artificial intelligence
- Combinatorial optimization

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ N_Queens.cpp -o n_queens

## Execution

./n_queens

## Result

The N-Queens problem was implemented
using the Backtracking approach in C++
to place N queens without conflicts.
