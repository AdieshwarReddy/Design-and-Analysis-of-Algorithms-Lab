# Experiment 5: Prim's Algorithm Output

## Test Case 1: Connected Weighted Graph

### Input

Number of Vertices: 5

Adjacency Matrix:

    0 2 0 6 0
    2 0 3 8 5
    0 3 0 0 7
    6 8 0 0 9
    0 5 7 9 0

### Expected Output

    Minimum Spanning Tree:

    Edge    Weight
    0 - 1   2
    1 - 2   3
    0 - 3   6
    1 - 4   5

    Minimum Cost: 16

### Selected Edges

| Source | Destination | Weight |
|--------|-------------|--------|
| 0 | 1 | 2 |
| 1 | 2 | 3 |
| 0 | 3 | 6 |
| 1 | 4 | 5 |

### Minimum Cost Calculation

Minimum Cost = 2 + 3 + 6 + 5

Minimum Cost = 16

### Step-by-Step Execution

| Step | Selected Vertex | Edge | Cost |
|------|-----------------|------|------|
| 1 | 0 | Starting Vertex | 0 |
| 2 | 1 | 0 - 1 | 2 |
| 3 | 2 | 1 - 2 | 3 |
| 4 | 4 | 1 - 4 | 5 |
| 5 | 3 | 0 - 3 | 6 |

Total Minimum Cost: 16

## Test Case 2: Four Vertices

### Input

Number of Vertices: 4

Adjacency Matrix:

    0 10 6 5
    10 0 0 15
    6 0 0 4
    5 15 4 0

### Expected Output

    Minimum Spanning Tree:

    Edge    Weight
    0 - 1   10
    3 - 2   4
    0 - 3   5

    Minimum Cost: 19

## Test Case 3: Two Vertices

### Input

Number of Vertices: 2

Adjacency Matrix:

    0 7
    7 0

### Expected Output

    Minimum Spanning Tree:

    Edge    Weight
    0 - 1   7

    Minimum Cost: 7

## Test Case 4: Disconnected Graph

### Input

Number of Vertices: 4

Adjacency Matrix:

    0 2 0 0
    2 0 0 0
    0 0 0 5
    0 0 5 0

### Expected Output

    Graph is disconnected.
    Minimum Spanning Tree does not exist.

## Test Case 5: Single Vertex

### Input

Number of Vertices: 1

Adjacency Matrix:

    0

### Expected Output

    Minimum Spanning Tree:
    Edge    Weight

    Minimum Cost: 0

## Complexity Analysis

| Parameter | Complexity |
|-----------|------------|
| Time Complexity | O(V^2) |
| Adjacency Matrix Space | O(V^2) |
| Auxiliary Space | O(V) |
| Total Space | O(V^2) |
| Number of MST Edges | V - 1 |

## Observations

- Prim's Algorithm follows the Greedy approach.
- The algorithm starts from vertex 0.
- The minimum weight connecting edge is
  selected at each iteration.
- All vertices are connected without cycles.
- A spanning tree contains V - 1 edges.
- The minimum cost for Test Case 1 is 16.
- A disconnected graph does not have
  a spanning tree covering all vertices.
- Zero represents the absence of an edge
  in this implementation.

## Result

Prim's Algorithm was successfully implemented
using C++ to determine the Minimum Cost
Spanning Tree of a weighted undirected graph.
