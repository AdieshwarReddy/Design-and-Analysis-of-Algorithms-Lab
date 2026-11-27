# Experiment 7: Travelling Salesman Problem Output

## Test Case 1: Four Cities

### Input

Number of Cities: 4

Travelling Cost Matrix:

    0  10 15 20
    10 0  35 25
    15 35 0  30
    20 25 30 0

### Expected Output

    Minimum Travelling Cost: 80
    Optimal Route: 0 -> 1 -> 3 -> 2 -> 0

### Cost Calculation

| Source City | Destination City | Cost |
|-------------|------------------|------|
| 0 | 1 | 10 |
| 1 | 3 | 25 |
| 3 | 2 | 30 |
| 2 | 0 | 15 |

Total Cost = 10 + 25 + 30 + 15

Minimum Travelling Cost = 80

### Possible Routes

| Route | Total Cost |
|-------|------------|
| 0 -> 1 -> 2 -> 3 -> 0 | 95 |
| 0 -> 1 -> 3 -> 2 -> 0 | 80 |
| 0 -> 2 -> 1 -> 3 -> 0 | 95 |
| 0 -> 2 -> 3 -> 1 -> 0 | 80 |
| 0 -> 3 -> 1 -> 2 -> 0 | 95 |
| 0 -> 3 -> 2 -> 1 -> 0 | 95 |

The minimum possible cost is 80.

## Test Case 2: Three Cities

### Input

Number of Cities: 3

Travelling Cost Matrix:

    0 10 15
    10 0 20
    15 20 0

### Expected Output

    Minimum Travelling Cost: 45
    Optimal Route: 0 -> 1 -> 2 -> 0

### Cost Calculation

Total Cost = 10 + 20 + 15

Minimum Cost = 45

## Test Case 3: Two Cities

### Input

Number of Cities: 2

Travelling Cost Matrix:

    0 25
    25 0

### Expected Output

    Minimum Travelling Cost: 50
    Optimal Route: 0 -> 1 -> 0

## Test Case 4: Single City

### Input

Number of Cities: 1

Travelling Cost Matrix:

    0

### Expected Output

    Minimum Travelling Cost: 0
    Optimal Route: 0 -> 0

## Test Case 5: Equal Travelling Costs

### Input

Number of Cities: 4

Travelling Cost Matrix:

    0 10 10 10
    10 0 10 10
    10 10 0 10
    10 10 10 0

### Expected Output

    Minimum Travelling Cost: 40
    Optimal Route: 0 -> 1 -> 2 -> 3 -> 0

## Test Case 6: Asymmetric Cost Matrix

### Input

Number of Cities: 3

Travelling Cost Matrix:

    0 10 20
    30 0 15
    5 25 0

### Expected Output

    Minimum Travelling Cost: 30
    Optimal Route: 0 -> 1 -> 2 -> 0

## Bitmask Representation

For four cities:

| Bitmask | Visited Cities |
|---------|----------------|
| 0001 | City 0 |
| 0011 | City 0, City 1 |
| 1011 | City 0, City 1, City 3 |
| 1111 | All Cities |

## Complexity Analysis

| Parameter | Complexity |
|-----------|------------|
| Brute Force Time | O(N!) |
| Dynamic Programming Time | O(N^2 * 2^N) |
| DP Table Space | O(N * 2^N) |
| Route Table Space | O(N * 2^N) |
| Recursion Stack | O(N) |
| Total Auxiliary Space | O(N * 2^N) |

## Observations

- Dynamic Programming avoids repeated calculations.
- Bitmasking represents visited cities efficiently.
- Every city is visited exactly once before returning.
- The salesman starts and ends at city 0.
- The algorithm finds the minimum travelling cost.
- Multiple optimal routes may exist.
- The program displays one optimal route.
- Dynamic Programming is more efficient than
  exhaustive permutation-based search.
- The algorithm still requires exponential memory.

## Result

The Travelling Salesman Problem was
implemented using Dynamic Programming
and bitmasking in C++.

The minimum travelling cost for the
first test case is 80.
