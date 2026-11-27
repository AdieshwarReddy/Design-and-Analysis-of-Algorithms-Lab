# Experiment 6: Graph Coloring Output

## Test Case 1: Graph with Five Vertices

### Input

Number of Vertices: 5

Adjacency Matrix:

    0 1 1 0 0
    1 0 1 1 0
    1 1 0 1 1
    0 1 1 0 1
    0 0 1 1 0

### Expected Output

    Graph Coloring Result:

    Vertex  Color
    0       1
    1       2
    2       3
    3       1
    4       2

    Total Colors Used: 3

### Color Assignment

| Vertex | Assigned Color |
|--------|----------------|
| 0 | Color 1 |
| 1 | Color 2 |
| 2 | Color 3 |
| 3 | Color 1 |
| 4 | Color 2 |

### Step-by-Step Execution

| Step | Vertex | Unavailable Colors | Assigned Color |
|------|--------|--------------------|----------------|
| 1 | 0 | None | 1 |
| 2 | 1 | 1 | 2 |
| 3 | 2 | 1, 2 | 3 |
| 4 | 3 | 2, 3 | 1 |
| 5 | 4 | 1, 3 | 2 |

Total Colors Used: 3

## Test Case 2: Complete Graph

### Input

Number of Vertices: 4

Adjacency Matrix:

    0 1 1 1
    1 0 1 1
    1 1 0 1
    1 1 1 0

### Expected Output

    Vertex  Color
    0       1
    1       2
    2       3
    3       4

    Total Colors Used: 4

## Test Case 3: Graph without Edges

### Input

Number of Vertices: 4

Adjacency Matrix:

    0 0 0 0
    0 0 0 0
    0 0 0 0
    0 0 0 0

### Expected Output

    Vertex  Color
    0       1
    1       1
    2       1
    3       1

    Total Colors Used: 1

## Test Case 4: Bipartite Graph

### Input

Number of Vertices: 4

Adjacency Matrix:

    0 1 0 1
    1 0 1 0
    0 1 0 1
    1 0 1 0

### Expected Output

    Vertex  Color
    0       1
    1       2
    2       1
    3       2

    Total Colors Used: 2

## Test Case 5: Single Vertex

### Input

Number of Vertices: 1

Adjacency Matrix:

    0

### Expected Output

    Vertex  Color
    0       1

    Total Colors Used: 1

## Test Case 6: Graph with Self-Loop

### Input

Number of Vertices: 2

Adjacency Matrix:

    1 1
    1 0

### Expected Output

    Self-loops are not allowed.

## Complexity Analysis

| Parameter | Complexity |
|-----------|------------|
| Time Complexity | O(V^2) |
| Adjacency Matrix Space | O(V^2) |
| Auxiliary Space | O(V) |
| Total Space | O(V^2) |

## Observations

- Graph Coloring follows the Greedy approach.
- No two adjacent vertices receive the same color.
- Non-adjacent vertices can share a color.
- Each vertex receives the smallest available color.
- Vertex ordering affects the number of colors used.
- A complete graph with V vertices requires V colors.
- A nonempty graph without edges requires one color.
- The greedy algorithm does not always guarantee
  the minimum possible number of colors.

## Result

Graph Coloring was implemented using
the Greedy Method in C++.

The program assigns colors to vertices
without conflicts between adjacent vertices.
