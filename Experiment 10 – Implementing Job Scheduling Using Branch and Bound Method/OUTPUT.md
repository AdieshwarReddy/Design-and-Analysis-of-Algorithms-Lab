# Experiment 10: Job Scheduling Output

## Test Case 1: Five Jobs

### Input

Number of Jobs: 5

| Job ID | Deadline | Profit |
|--------|----------|--------|
| J1 | 2 | 100 |
| J2 | 1 | 19 |
| J3 | 2 | 27 |
| J4 | 1 | 25 |
| J5 | 3 | 15 |

### Jobs Sorted by Profit

| Job ID | Deadline | Profit |
|--------|----------|--------|
| J1 | 2 | 100 |
| J3 | 2 | 27 |
| J4 | 1 | 25 |
| J2 | 1 | 19 |
| J5 | 3 | 15 |

### Expected Output

    Optimal Job Schedule:

    Time Slot    Job ID    Profit
    1            J3        27
    2            J1        100
    3            J5        15

    Maximum Profit: 142

### Profit Calculation

Maximum Profit = 27 + 100 + 15

Maximum Profit = 142

### Scheduling Explanation

| Job | Assigned Slot | Status |
|-----|---------------|--------|
| J1 | 2 | Scheduled |
| J3 | 1 | Scheduled |
| J4 | None | Rejected |
| J2 | None | Rejected |
| J5 | 3 | Scheduled |

All selected jobs are completed
within their respective deadlines.

## Test Case 2: Four Jobs

### Input

Number of Jobs: 4

    J1 2 60
    J2 1 100
    J3 3 20
    J4 2 40

### Expected Output

    Optimal Job Schedule:

    Time Slot    Job ID    Profit
    1            J2        100
    2            J1        60
    3            J3        20

    Maximum Profit: 180

## Test Case 3: Same Deadline

### Input

Number of Jobs: 4

    J1 1 20
    J2 1 50
    J3 1 30
    J4 1 40

### Expected Output

    Optimal Job Schedule:

    Time Slot    Job ID    Profit
    1            J2        50

    Maximum Profit: 50

### Explanation

All jobs have the same deadline.
Only one job can be scheduled.

The job with the highest profit is selected.

## Test Case 4: All Jobs Can Be Scheduled

### Input

Number of Jobs: 3

    J1 1 20
    J2 2 30
    J3 3 40

### Expected Output

    Optimal Job Schedule:

    Time Slot    Job ID    Profit
    1            J1        20
    2            J2        30
    3            J3        40

    Maximum Profit: 90

## Test Case 5: Single Job

### Input

Number of Jobs: 1

    J1 1 75

### Expected Output

    Optimal Job Schedule:

    Time Slot    Job ID    Profit
    1            J1        75

    Maximum Profit: 75

## Test Case 6: Invalid Deadline

### Input

Number of Jobs: 2

    J1 0 50

### Expected Output

    Invalid deadline or profit.

## Test Case 7: Zero Profit Jobs

### Input

Number of Jobs: 3

    J1 1 0
    J2 2 0
    J3 3 0

### Expected Output

    Optimal Job Schedule:

    Time Slot    Job ID    Profit

    Maximum Profit: 0

## Complexity Analysis

| Parameter | Complexity |
|-----------|------------|
| Sorting | O(N log N) |
| Candidate Search Space | O(2^N) |
| Worst-Case Time | O(D * 2^N + N log N) |
| Job Array | O(N) |
| Schedule Arrays | O(D) |
| Remaining Profit Array | O(N) |
| Recursion Stack | O(N) |
| Total Space | O(N), since D <= N |

## Observations

- Branch and Bound explores job combinations.
- Jobs are sorted in descending order of profit.
- Each job requires one unit of execution time.
- Every scheduled job meets its deadline.
- Each time slot contains at most one job.
- The upper bound eliminates branches that
  cannot improve the maximum profit.
- Jobs with higher profits are considered first.
- Multiple optimal schedules may exist.
- The program displays one optimal schedule.

## Result

Job Scheduling was implemented using
the Branch and Bound Method in C++.

The maximum profit obtained in the
first test case is 142.
