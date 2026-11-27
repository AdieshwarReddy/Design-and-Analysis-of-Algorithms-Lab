# Experiment 5: Minimum Cost Spanning Tree Using Prim's Algorithm

## Aim

To implement Prim's Algorithm using the Greedy
technique to find the Minimum Cost Spanning
Tree of a weighted undirected graph in C++.

## Theory

Prim's Algorithm is a greedy algorithm used
to find the Minimum Spanning Tree (MST)
of a connected, weighted, undirected graph.

A spanning tree connects all vertices of
a graph without forming any cycles.

A Minimum Spanning Tree is a spanning tree
whose total edge weight is minimum among
all possible spanning trees.

Prim's Algorithm starts from an arbitrary
vertex and repeatedly selects the minimum
weight edge connecting a selected vertex
to an unselected vertex.

## Greedy Approach

The greedy approach selects the locally
optimal choice at each step to obtain
a globally optimal solution.

Prim's Algorithm selects the minimum
weight edge crossing from the current
tree to an unselected vertex.

## Properties of Minimum Spanning Tree

- Connects all vertices of the graph.
- Does not contain cycles.
- Contains exactly V - 1 edges.
- Has minimum total edge weight.
- May not be unique when edge weights are equal.

## Algorithm

1. Start the program.
2. Read the number of vertices.
3. Read the weighted adjacency matrix.
4. Initialize all vertices as unselected.
5. Initialize all key values to infinity.
6. Set the key of the starting vertex to zero.
7. Select the unselected vertex with
   the minimum key value.
8. Mark the selected vertex.
9. Update the key and parent values of
   its adjacent unselected vertices.
10. Repeat until all vertices are selected.
11. Display the selected edges.
12. Calculate the total minimum cost.
13. Stop the program.

## Time Complexity

O(V^2)

Here, V is the number of vertices.

Using an adjacency list and binary heap,
Prim's Algorithm can achieve O(E log V).

## Space Complexity

- Adjacency Matrix: O(V^2)
- Auxiliary Arrays: O(V)
- Total Space: O(V^2)

## Advantages

- Produces a Minimum Spanning Tree.
- Efficient for dense graphs using an
  adjacency matrix.
- Simple greedy implementation.
- Avoids cycles during construction.

## Disadvantages

- Requires a connected graph to produce
  a spanning tree.
- Adjacency matrix requires additional memory.
- Less efficient for large sparse graphs
  without a priority queue.

## Applications

- Computer network design
- Electrical power distribution
- Road network construction
- Telecommunication networks
- Water pipeline networks
- Minimum cost infrastructure planning

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ Prims.cpp -o prims

## Execution

./prims

## Result

Prim's Algorithm was implemented using
the Greedy technique in C++ to determine
the Minimum Cost Spanning Tree of a
weighted undirected graph.
