# Experiment 1: Union-Find Operations Output

## Test Case 1

### Input

Number of People: 6

Number of Friendships: 4

Friendship Pairs:

    1 2
    2 3
    4 5
    5 6

Number of Queries: 3

Query Pairs:

    1 3
    4 6
    1 5

### Expected Output

    1 and 3 belong to the same group.
    4 and 6 belong to the same group.
    1 and 5 belong to different groups.

### Connected Groups

Group 1: {1, 2, 3}

Group 2: {4, 5, 6}

### Query Results

| Person 1 | Person 2 | Connectivity |
|----------|----------|--------------|
| 1 | 3 | Connected |
| 4 | 6 | Connected |
| 1 | 5 | Not Connected |

## Test Case 2

### Input

Number of People: 5

Number of Friendships: 3

Friendship Pairs:

    1 2
    2 3
    3 4

Number of Queries: 3

Query Pairs:

    1 4
    2 5
    3 4

### Expected Output

    1 and 4 belong to the same group.
    2 and 5 belong to different groups.
    3 and 4 belong to the same group.

### Connected Groups

Group 1: {1, 2, 3, 4}

Group 2: {5}

### Query Results

| Person 1 | Person 2 | Connectivity |
|----------|----------|--------------|
| 1 | 4 | Connected |
| 2 | 5 | Not Connected |
| 3 | 4 | Connected |

## Observations

- Initially, every person belongs to a separate set.
- Union operations combine connected social groups.
- Find operations identify group representatives.
- Path compression reduces tree depth.
- Union by rank helps maintain efficient trees.
- People with the same representative belong
  to the same connected group.
- Indirect friendship connections can also
  be identified using Union-Find.

## Complexity Analysis

| Operation | Time Complexity |
|-----------|-----------------|
| Initialization | O(n) |
| Find | O(alpha(n)) amortized |
| Union | O(alpha(n)) amortized |
| Connectivity Check | O(alpha(n)) amortized |

Space Complexity: O(n)

## Result

Union-Find operations were implemented
using C++ to identify connected groups
in a social network.
