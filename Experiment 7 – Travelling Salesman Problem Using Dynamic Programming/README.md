# Experiment 7: Travelling Salesman Problem Using Dynamic Programming

## Aim

To implement the Travelling Salesman Problem
using Dynamic Programming in C++ to find
the minimum cost of visiting all cities
exactly once and returning to the starting city.

## Theory

The Travelling Salesman Problem (TSP) is
a classical combinatorial optimization problem.

A salesman must visit every city exactly
once and return to the starting city while
minimizing the total travelling cost.

Dynamic Programming solves the problem by
dividing it into overlapping subproblems
and storing previously calculated results.

## Dynamic Programming Approach

The algorithm uses bitmasking to represent
the set of visited cities.

- Each bit represents a city.
- A set bit indicates a visited city.
- An unset bit indicates an unvisited city.

The DP state is represented as:

    dp[mask][pos]

Where:

- mask represents the set of visited cities.
- pos represents the current city.

## Recurrence Relation

    TSP(mask, pos) =
        min(cost[pos][city] +
        TSP(mask | (1 << city), city))

The minimum is calculated over all
unvisited cities.

## Base Condition

When all cities have been visited,
return the cost of travelling from
the current city to the starting city.

## Algorithm

1. Start the program.
2. Read the number of cities.
3. Read the travelling cost matrix.
4. Initialize the DP table with -1.
5. Start travelling from city 0.
6. Mark the starting city as visited.
7. Identify all unvisited cities.
8. Calculate the cost of visiting each city.
9. Recursively calculate the remaining cost.
10. Store the minimum cost in the DP table.
11. Repeat until all cities are visited.
12. Return to the starting city.
13. Display the minimum travelling cost.
14. Display the optimal travelling route.
15. Stop the program.

## Time Complexity

O(N^2 * 2^N)

Here, N represents the number of cities.

## Space Complexity

- DP Table: O(N * 2^N)
- Recursion Stack: O(N)
- Total Auxiliary Space: O(N * 2^N)

## Advantages

- Finds the optimal travelling cost.
- Avoids repeated calculations.
- More efficient than brute force.
- Can reconstruct the optimal route.

## Disadvantages

- Requires exponential memory.
- Execution becomes expensive for large N.
- Not suitable for very large datasets.

## Applications

- Delivery route optimization
- Logistics and transportation
- Vehicle routing
- Manufacturing processes
- Robot path planning
- Circuit board manufacturing

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ TSP.cpp -o tsp

## Execution

./tsp

## Result

The Travelling Salesman Problem was
implemented using Dynamic Programming
and bitmasking in C++ to determine
the minimum travelling cost and optimal route.
