# Experiment 9: Hamiltonian Cycle Using Branch and Bound Method

## Aim

To implement the Hamiltonian Cycle problem
using the Branch and Bound Method in C++
to determine whether a given graph contains
a Hamiltonian Cycle.

## Theory

A Hamiltonian Cycle is a cycle in an
undirected graph that visits every vertex
exactly once and returns to the starting
vertex.

A Hamiltonian Path visits every vertex
exactly once but does not necessarily
return to the starting vertex.

The Branch and Bound technique explores
possible solutions by dividing the problem
into smaller branches and eliminating
branches that cannot produce a valid solution.

## Branch and Bound Approach

### Branching

Generate possible paths by selecting
adjacent unvisited vertices.

### Bounding

Eliminate branches when:

- The selected vertex is already visited.
- No edge exists between consecutive vertices.
- An unvisited vertex has fewer than two
  possible neighbors in the remaining graph.
- The remaining vertices cannot complete
  a Hamiltonian Cycle.

## Algorithm

1. Start the program.
2. Read the number of vertices.
3. Read the adjacency matrix.
4. Initialize the path with vertex 0.
5. Mark vertex 0 as visited.
6. Check the feasibility of the remaining graph.
7. Select an adjacent unvisited vertex.
8. Add the selected vertex to the path.
9. Recursively explore the remaining vertices.
10. Eliminate branches that cannot form a cycle.
11. If all vertices are visited, check whether
    the last vertex connects to vertex 0.
12. If a cycle exists, display the cycle.
13. Otherwise, display that no cycle exists.
14. Stop the program.

## Time Complexity

- Candidate Search Space: O(V!)
- Feasibility Checking: O(V^2)
- Conservative Time Upper Bound: O(V^2 * V!)

Here, V represents the number of vertices.

## Space Complexity

- Adjacency Matrix: O(V^2)
- Path Array: O(V)
- Visited Array: O(V)
- Recursion Stack: O(V)
- Total Space: O(V^2)

## Advantages

- Eliminates infeasible branches early.
- Avoids unnecessary exploration.
- Finds a Hamiltonian Cycle if one exists.
- Demonstrates combinatorial search techniques.

## Disadvantages

- Worst-case complexity remains factorial.
- Expensive for large graphs.
- Performance depends on the effectiveness
  of the bounding conditions.

## Applications

- Travelling Salesman Problem
- Route planning
- Network design
- Circuit design
- Scheduling problems
- Combinatorial optimization

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ Hamiltonian_Cycle.cpp -o hamiltonian

## Execution

./hamiltonian

## Result

The Hamiltonian Cycle problem was implemented
using branching and feasibility-based bounding
in C++ to determine whether a given graph
contains a Hamiltonian Cycle.
