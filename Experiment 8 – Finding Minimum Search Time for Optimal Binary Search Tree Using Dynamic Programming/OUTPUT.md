# Experiment 8: Optimal Binary Search Tree Output

## Test Case 1: Three Keys

### Input

Number of Keys: 3

Keys:

    10 12 20

Search Frequencies:

    34 8 50

### Expected Output

    Minimum Search Cost: 142

    Optimal Binary Search Tree:
    Root: 20
    Left child of 20: 10
    Right child of 10: 12

### Search Cost Calculation

| Key | Frequency | Level | Weighted Cost |
|-----|-----------|-------|---------------|
| 20 | 50 | 1 | 50 |
| 10 | 34 | 2 | 68 |
| 12 | 8 | 3 | 24 |

Total Search Cost = 50 + 68 + 24

Minimum Search Cost = 142

## Dynamic Programming Table

| Key | 10 | 12 | 20 |
|-----|----|----|----|
| 10 | 34 | 50 | 142 |
| 12 | - | 8 | 66 |
| 20 | - | - | 50 |

The final minimum cost is stored in
cost[0][2].

## Test Case 2: Two Keys

### Input

Number of Keys: 2

Keys:

    10 20

Search Frequencies:

    5 10

### Expected Output

    Minimum Search Cost: 20

    Optimal Binary Search Tree:
    Root: 20
    Left child of 20: 10

### Cost Calculation

Total Cost = (10 * 1) + (5 * 2)

Minimum Search Cost = 20

## Test Case 3: Single Key

### Input

Number of Keys: 1

Keys:

    25

Search Frequencies:

    15

### Expected Output

    Minimum Search Cost: 15

    Optimal Binary Search Tree:
    Root: 25

## Test Case 4: Equal Frequencies

### Input

Number of Keys: 3

Keys:

    10 20 30

Search Frequencies:

    10 10 10

### Expected Output

    Minimum Search Cost: 50

    Optimal Binary Search Tree:
    Root: 20
    Left child of 20: 10
    Right child of 20: 30

## Test Case 5: Four Keys

### Input

Number of Keys: 4

Keys:

    10 20 30 40

Search Frequencies:

    1 2 3 4

### Expected Output

    Minimum Search Cost: 18

    Optimal Binary Search Tree:
    Root: 30
    Left child of 30: 20
    Left child of 20: 10
    Right child of 30: 40

### Cost Calculation

Total Cost = (3 * 1) + (2 * 2)
             + (1 * 3) + (4 * 2)

Minimum Search Cost = 18

## Test Case 6: Unsorted Keys

### Input

Number of Keys: 3

Keys:

    20 10 30

### Expected Output

    Keys must be distinct and sorted.

## Complexity Analysis

| Parameter | Complexity |
|-----------|------------|
| Time Complexity | O(N^3) |
| Cost Table Space | O(N^2) |
| Root Table Space | O(N^2) |
| Prefix Sum Space | O(N) |
| Recursion Stack | O(N) |
| Total Auxiliary Space | O(N^2) |

## Observations

- Dynamic Programming avoids repeated
  subtree cost calculations.
- Every key is considered as a possible root.
- Search frequencies determine the optimal
  structure of the Binary Search Tree.
- Frequently searched keys generally appear
  closer to the root.
- Prefix sums allow frequency sums to be
  calculated in constant time.
- The algorithm minimizes the weighted
  number of key comparisons.
- Multiple optimal trees may exist.
- The program displays one optimal tree.

## Result

An Optimal Binary Search Tree was implemented
using Dynamic Programming in C++.

The minimum weighted search cost for the
first test case is 142.
