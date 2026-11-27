# Experiment 1: Union-Find Operations in a Social Network

## Aim

To implement Union-Find operations in a social
network using the Disjoint Set Union data
structure in C++.

## Theory

Union-Find, also known as Disjoint Set Union
(DSU), is a data structure used to maintain
a collection of non-overlapping sets.

In a social network, each person initially
belongs to an individual group. When two
people become friends, their groups are merged.

Union-Find helps determine whether two people
belong to the same connected group.

## Operations

### 1. Make Set

Initially, every person belongs to a separate
set and is their own parent.

### 2. Find

Finds the representative or root of the set
to which a person belongs.

### 3. Union

Combines two different sets into a single set.

## Optimization Techniques

### Path Compression

During the Find operation, nodes are directly
connected to their root to reduce future
search time.

### Union by Rank

The tree with smaller rank is attached to
the tree with larger rank.

If both trees have equal rank, one becomes
the parent and its rank is increased.

## Algorithm

1. Start the program.
2. Read the number of people.
3. Initialize every person as their own parent.
4. Initialize all ranks to zero.
5. Read the friendship connections.
6. Perform Union operations for each connection.
7. Read two people to check their connectivity.
8. Find the representative of both people.
9. If both representatives are equal, they
   belong to the same social group.
10. Otherwise, they belong to different groups.
11. Stop the program.

## Time Complexity

- Initialization: O(n)
- Find: O(alpha(n)) amortized
- Union: O(alpha(n)) amortized

Here, alpha(n) is the inverse Ackermann
function, which grows extremely slowly.

## Space Complexity

O(n), where n is the number of people.

## Applications

- Social network connectivity
- Friend group detection
- Network connectivity
- Kruskal's minimum spanning tree algorithm
- Connected component detection
- Cycle detection in undirected graphs

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ Union_Find.cpp -o union_find

## Execution

./union_find

## Result

Union-Find operations in a social network
were implemented using path compression
and union by rank in C++.
