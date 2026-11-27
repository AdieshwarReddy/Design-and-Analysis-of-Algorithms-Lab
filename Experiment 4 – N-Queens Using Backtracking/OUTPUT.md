# Experiment 4: N-Queens Problem Output

## Test Case 1: Four Queens

### Input

Number of Queens: 4

### Expected Output

    Solution Chessboard:

    0 1 0 0
    0 0 0 1
    1 0 0 0
    0 0 1 0

    All queens placed successfully.

### Queen Positions

| Queen | Row | Column |
|-------|-----|--------|
| Q1 | 1 | 2 |
| Q2 | 2 | 4 |
| Q3 | 3 | 1 |
| Q4 | 4 | 3 |

The positions use one-based indexing.

## Test Case 2: One Queen

### Input

Number of Queens: 1

### Expected Output

    Solution Chessboard:

    1

    All queens placed successfully.

## Test Case 3: Two Queens

### Input

Number of Queens: 2

### Expected Output

    No solution exists.

## Test Case 4: Three Queens

### Input

Number of Queens: 3

### Expected Output

    No solution exists.

## Test Case 5: Five Queens

### Input

Number of Queens: 5

### Expected Output

    Solution Chessboard:

    1 0 0 0 0
    0 0 1 0 0
    0 0 0 0 1
    0 1 0 0 0
    0 0 0 1 0

    All queens placed successfully.

## Test Case 6: Invalid Input

### Input

Number of Queens: 0

### Expected Output

    Invalid number of queens.

## Number of Possible Solutions

| Number of Queens | Total Solutions |
|------------------|-----------------|
| 1 | 1 |
| 2 | 0 |
| 3 | 0 |
| 4 | 2 |
| 5 | 10 |
| 6 | 4 |
| 7 | 40 |
| 8 | 92 |

Note: The above table represents the total
number of distinct solutions to the N-Queens
problem. This program displays only the
first valid solution.

## Complexity Analysis

| Parameter | Complexity |
|-----------|------------|
| Candidate Search Space | O(N!) |
| Safety Check | O(N) |
| Conservative Time Upper Bound | O(N^2 * N!) |
| Chessboard Space | O(N^2) |
| Recursion Stack | O(N) |
| Total Auxiliary Space | O(N^2) |

## Observations

- Each row contains exactly one queen.
- No two queens occupy the same column.
- No two queens occupy the same diagonal.
- Backtracking removes invalid placements.
- The algorithm explores columns from
  left to right.
- No solution exists for N = 2 or N = 3.
- A solution exists for N = 1 and N >= 4.
- The program stops after finding the
  first valid solution.

## Result

The N-Queens problem was implemented
using Backtracking in C++.

The program identifies a valid arrangement
of queens such that no two queens attack
each other.
