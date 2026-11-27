# Experiment 8: Optimal Binary Search Tree Using Dynamic Programming

## Aim

To implement an Optimal Binary Search Tree
using Dynamic Programming in C++ to minimize
the total weighted search cost.

## Theory

A Binary Search Tree (BST) is a binary tree
in which the keys in the left subtree are
smaller than the root and the keys in the
right subtree are greater than the root.

An Optimal Binary Search Tree (OBST) is a
Binary Search Tree constructed using the
search frequencies of its keys to minimize
the total weighted search cost.

Frequently searched keys are generally
placed closer to the root to reduce the
overall search cost.

## Dynamic Programming Approach

Dynamic Programming calculates the minimum
search cost for smaller groups of keys
and stores their results in a DP table.

Every key in a given interval is considered
as a possible root.

The root that produces the minimum combined
search cost is selected.

## Recurrence Relation

    cost[i][j] = sum(freq[i...j]) +
                 min(cost[i][r-1] +
                     cost[r+1][j])

Here:

- i is the starting index.
- j is the ending index.
- r is the selected root index.
- freq represents the search frequencies.
- cost[i][j] represents the minimum search
  cost for keys from index i to j.

The cost of an empty subtree is zero.

## Base Condition

For a single key:

    cost[i][i] = freq[i]

## Algorithm

1. Start the program.
2. Read the number of keys.
3. Read the keys in ascending order.
4. Read the search frequency of each key.
5. Initialize the DP table with zeros.
6. Initialize single-key costs using their
   corresponding frequencies.
7. Consider subtrees of increasing lengths.
8. Calculate the sum of frequencies.
9. Consider each key as a possible root.
10. Calculate the left and right subtree costs.
11. Add the sum of frequencies.
12. Store the minimum cost in the DP table.
13. Store the corresponding optimal root.
14. Display the minimum search cost.
15. Display the optimal tree structure.
16. Stop the program.

## Time Complexity

O(N^3)

Here, N represents the number of keys.

## Space Complexity

- Cost Table: O(N^2)
- Root Table: O(N^2)
- Prefix Sum Array: O(N)
- Total Auxiliary Space: O(N^2)

## Advantages

- Minimizes the weighted search cost.
- Avoids repeated calculations.
- Considers the search frequency of each key.
- Produces an optimal tree for the given
  search frequencies.

## Disadvantages

- Requires additional memory.
- Has cubic time complexity in the
  standard Dynamic Programming approach.
- Requires known search frequencies.
- May require reconstruction when search
  frequencies change significantly.

## Applications

- Dictionary implementation
- Compiler symbol tables
- Frequently accessed records
- Information retrieval systems
- Search optimization
- Static lookup tables

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ OBST.cpp -o obst

## Execution

./obst

## Result

An Optimal Binary Search Tree was constructed
using Dynamic Programming in C++ to minimize
the weighted search cost for the given keys
and their search frequencies.
