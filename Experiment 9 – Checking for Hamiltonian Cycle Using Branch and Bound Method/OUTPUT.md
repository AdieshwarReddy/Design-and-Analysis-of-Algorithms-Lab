# Experiment 9: Hamiltonian Cycle Output

## Test Case 1: Graph with Hamiltonian Cycle

### Input

Number of Vertices: 5

Adjacency Matrix:

    0 1 0 1 0
    1 0 1 1 1
    0 1 0 0 1
    1 1 0 0 1
    0 1 1 1 0

### Expected Output

    Hamiltonian Cycle exists.
    Hamiltonian Cycle: 0 -> 1 -> 2 -> 4 -> 3 -> 0

### Step-by-Step Execution

| Step | Selected Vertex | Current Path |
|------|-----------------|--------------|
| 1 | 0 | 0 |
| 2 | 1 | 0 -> 1 |
| 3 | 2 | 0 -> 1 -> 2 |
| 4 | 4 | 0 -> 1 -> 2 -> 4 |
| 5 | 3 | 0 -> 1 -> 2 -> 4 -> 3 |
| 6 | 0 | 0 -> 1 -> 2 -> 4 -> 3 -> 0 |

All vertices are visited exactly once
before returning to the starting vertex.

## Test Case 2: Graph without Hamiltonian Cycle

### Input

Number of Vertices: 5

Adjacency Matrix:

    0 1 0 0 0
    1 0 1 0 0
    0 1 0 1 0
    0 0 1 0 1
    0 0 0 1 0

### Expected Output

    Hamiltonian Cycle does not exist.

### Explanation

The graph forms a path but does not
contain an edge connecting its endpoints.

## Test Case 3: Complete Graph

### Input

Number of Vertices: 4

Adjacency Matrix:

    0 1 1 1
    1 0 1 1
    1 1 0 1
    1 1 1 0

### Expected Output

    Hamiltonian Cycle exists.
    Hamiltonian Cycle: 0 -> 1 -> 2 -> 3 -> 0

## Test Case 4: Triangle Graph

### Input

Number of Vertices: 3

Adjacency Matrix:

    0 1 1
    1 0 1
    1 1 0

### Expected Output

    Hamiltonian Cycle exists.
    Hamiltonian Cycle: 0 -> 1 -> 2 -> 0

## Test Case 5: Disconnected Graph

### Input

Number of Vertices: 4

Adjacency Matrix:

    0 1 0 0
    1 0 0 0
    0 0 0 1
    0 0 1 0

### Expected Output

    Hamiltonian Cycle does not exist.

## Test Case 6: Star Graph

### Input

Number of Vertices: 4

Adjacency Matrix:

    0 1 1 1
    1 0 0 0
    1 0 0 0
    1 0 0 0

### Expected Output

    Hamiltonian Cycle does not exist.

## Test Case 7: Invalid Number of Vertices

### Input

Number of Vertices: 2

### Expected Output

    At least 3 vertices are required.

## Complexity Analysis

| Parameter | Complexity |
|-----------|------------|
| Candidate Search Space | O(V!) |
| Bounding Function | O(V^2) |
| Conservative Time Upper Bound | O(V^2 * V!) |
| Adjacency Matrix Space | O(V^2) |
| Path Array | O(V) |
| Visited Array | O(V) |
| Recursion Stack | O(V) |
| Total Space | O(V^2) |

## Observations

- Every vertex must be visited exactly once.
- The cycle must return to the starting vertex.
- Consecutive vertices must be adjacent.
- Branching generates possible vertex sequences.
- Bounding eliminates infeasible branches.
- A vertex with fewer than two available
  neighbors cannot complete a Hamiltonian Cycle.
- A disconnected graph cannot contain
  a Hamiltonian Cycle.
- Multiple Hamiltonian Cycles may exist.
- The program displays the first valid cycle.

## Result

The Hamiltonian Cycle problem was implemented
using branching and feasibility-based bounding
in C++.

The program determines whether a Hamiltonian
Cycle exists in the given graph.
