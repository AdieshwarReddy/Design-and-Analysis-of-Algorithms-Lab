# Experiment 6: Graph Coloring Using Greedy Method

## Aim

To implement Graph Coloring using the
Greedy Method in C++ such that no two
adjacent vertices have the same color.

## Theory

Graph Coloring is the process of assigning
colors to the vertices of a graph such that
no two adjacent vertices have the same color.

The minimum number of colors required to
properly color a graph is called its
Chromatic Number.

The Greedy Graph Coloring algorithm assigns
the smallest available color to each vertex
without violating the coloring constraints.

The greedy method produces a valid coloring
but does not always guarantee the minimum
possible number of colors.

## Greedy Approach

1. Select a vertex.
2. Identify the colors assigned to its
   adjacent vertices.
3. Find the smallest available color.
4. Assign that color to the current vertex.
5. Repeat until all vertices are colored.

## Algorithm

1. Start the program.
2. Read the number of vertices.
3. Read the adjacency matrix.
4. Initialize all vertices as uncolored.
5. Select vertices in sequential order.
6. Identify the colors used by adjacent
   vertices.
7. Mark those colors as unavailable.
8. Find the smallest available color.
9. Assign the color to the current vertex.
10. Repeat until all vertices are colored.
11. Display the color assigned to each vertex.
12. Display the total number of colors used.
13. Stop the program.

## Time Complexity

O(V^2)

Here, V represents the number of vertices.

## Space Complexity

- Adjacency Matrix: O(V^2)
- Color Array: O(V)
- Available Color Array: O(V)
- Auxiliary Space: O(V)
- Total Space: O(V^2)

## Advantages

- Simple to implement.
- Produces a valid graph coloring.
- Efficient compared to exhaustive search.
- Useful for practical scheduling problems.

## Disadvantages

- Does not always produce optimal coloring.
- Results depend on vertex ordering.
- May use more colors than the chromatic number.

## Applications

- Examination timetable scheduling
- Register allocation in compilers
- Frequency assignment
- Map coloring
- Resource allocation
- Task scheduling
- Conflict management

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ Graph_Coloring.cpp -o graph_coloring

## Execution

./graph_coloring

## Result

Graph Coloring was implemented using the
Greedy Method in C++ such that no two
adjacent vertices have the same color.
