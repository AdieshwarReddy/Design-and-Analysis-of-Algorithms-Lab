# Experiment 3: Rat in a Maze Output

## Test Case 1: Maze with a Valid Path

### Input

Maze Size: 4

Maze Matrix:

    1 0 0 0
    1 1 0 1
    0 1 0 0
    1 1 1 1

### Expected Output

    Solution Path:

    1 0 0 0
    1 1 0 0
    0 1 0 0
    0 1 1 1

    Destination reached successfully.

### Path Traversed

(0,0) -> (1,0) -> (1,1) -> (2,1)
-> (3,1) -> (3,2) -> (3,3)

Movement Sequence: D R D D R R

D represents Down.
R represents Right.

## Test Case 2: Maze without a Valid Path

### Input

Maze Size: 4

Maze Matrix:

    1 0 0 0
    1 1 0 0
    0 0 0 0
    0 0 1 1

### Expected Output

    No path exists.

## Test Case 3: Completely Open Maze

### Input

Maze Size: 3

Maze Matrix:

    1 1 1
    1 1 1
    1 1 1

### Expected Output

    Solution Path:

    1 0 0
    1 0 0
    1 1 1

    Destination reached successfully.

## Test Case 4: Blocked Starting Position

### Input

Maze Size: 3

Maze Matrix:

    0 1 1
    1 1 1
    1 1 1

### Expected Output

    No path exists.

## Test Case 5: Single Cell Maze

### Input

Maze Size: 1

Maze Matrix:

    1

### Expected Output

    Solution Path:

    1

    Destination reached successfully.

## Test Case 6: Maze Requiring Backtracking

### Input

Maze Size: 4

Maze Matrix:

    1 1 1 1
    1 0 0 1
    1 0 0 1
    0 0 0 1

### Expected Output

    Solution Path:

    1 1 1 1
    0 0 0 1
    0 0 0 1
    0 0 0 1

    Destination reached successfully.

## Complexity Analysis

| Parameter | Complexity |
|-----------|------------|
| Worst Case Time | O(2^(2n)) upper bound |
| Solution Matrix Space | O(n^2) |
| Recursion Stack Space | O(n) |
| Total Auxiliary Space | O(n^2) |

## Observations

- The rat starts at the top-left corner.
- The destination is the bottom-right corner.
- Cells containing zero are blocked.
- Cells containing one are accessible.
- The rat attempts to move down before right.
- Invalid paths are eliminated by backtracking.
- The solution matrix represents the first
  valid path found.
- If no valid path exists, the program
  displays an appropriate message.

## Result

The Rat in a Maze problem was implemented
using Backtracking in C++ to identify a valid
path from the starting position to the
destination.
