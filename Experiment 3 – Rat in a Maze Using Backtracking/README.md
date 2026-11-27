# Experiment 3: Rat in a Maze Using Backtracking

## Aim

To implement the Rat in a Maze problem
using the Backtracking technique in C++.

## Theory

The Rat in a Maze problem is a classical
backtracking problem in which a rat must
find a valid path from the starting position
to the destination in a maze.

The maze is represented using a two-dimensional
matrix containing zeros and ones.

- 1 represents an accessible cell.
- 0 represents a blocked cell.

The rat starts at the top-left corner (0, 0)
and attempts to reach the bottom-right corner
(n-1, n-1).

In this implementation, the rat can move
in two directions:

- Down
- Right

## Backtracking

Backtracking is an algorithm design technique
that builds a solution incrementally.

If a selected path does not lead to a valid
solution, the algorithm returns to the previous
position and attempts another possible path.

## Algorithm

1. Start the program.
2. Read the size of the maze.
3. Read the maze matrix.
4. Initialize the solution matrix with zeros.
5. Start from the top-left corner.
6. Check whether the current position is valid.
7. Mark the current cell as part of the solution.
8. If the destination is reached, return true.
9. Attempt to move down.
10. If unsuccessful, attempt to move right.
11. If both movements fail, unmark the cell
    and backtrack.
12. Display the solution matrix if a path exists.
13. Otherwise, display "No path exists."
14. Stop the program.

## Time Complexity

Worst Case: O(2^(2n))

This is an exponential upper bound because
the rat can explore two possible directions
at each step, with a maximum path depth
proportional to n.

## Space Complexity

- Solution Matrix: O(n^2)
- Recursion Stack: O(n)
- Total Auxiliary Space: O(n^2)

## Advantages

- Simple recursive implementation.
- Finds a valid path if one exists.
- Avoids continuing along invalid paths.
- Demonstrates systematic problem solving.

## Disadvantages

- Can require exponential execution time.
- Recursive calls introduce overhead.
- This implementation finds only the first
  valid path.
- Movement is restricted to down and right.

## Applications

- Maze solving
- Robot navigation
- Puzzle solving
- Pathfinding
- Constraint satisfaction problems

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ Rat_in_a_Maze.cpp -o rat_maze

## Execution

./rat_maze

## Result

The Rat in a Maze problem was implemented
using the Backtracking technique in C++.
