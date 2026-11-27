# Experiment 10: Job Scheduling Using Branch and Bound Method

## Aim

To implement Job Scheduling using the
Branch and Bound Method in C++ to maximize
the total profit obtained by completing
jobs within their deadlines.

## Theory

Job Scheduling is a combinatorial
optimization problem in which a set of
jobs must be scheduled while satisfying
specified constraints.

Each job contains:

- Job ID
- Deadline
- Profit

Each job requires one unit of execution time.

A job earns its profit only when it is
completed within its deadline.

The objective is to select and schedule
jobs to obtain the maximum possible profit.

## Branch and Bound Approach

Branch and Bound explores possible job
combinations and eliminates branches
that cannot improve the best known solution.

### Branching

For every job, two possibilities are explored:

1. Include the job in the schedule.
2. Exclude the job from the schedule.

### Bounding

The upper bound is calculated as:

    Upper Bound = Current Profit
                  + Remaining Possible Profit

If the upper bound is less than or equal
to the maximum profit already obtained,
the branch is eliminated.

## Algorithm

1. Start the program.
2. Read the number of jobs.
3. Read the job IDs, deadlines and profits.
4. Sort jobs in descending order of profit.
5. Initialize all time slots as empty.
6. Initialize maximum profit to zero.
7. Calculate the upper bound of each branch.
8. If the upper bound cannot improve the
   maximum profit, eliminate the branch.
9. Try scheduling the current job in the
   latest available slot before its deadline.
10. Recursively explore the inclusion branch.
11. Remove the job from the current schedule.
12. Recursively explore the exclusion branch.
13. Update the best schedule whenever a
    higher profit is obtained.
14. Display the optimal job schedule.
15. Display the maximum profit.
16. Stop the program.

## Time Complexity

Worst-case search space: O(2^N)

Sorting: O(N log N)

If D represents the number of time slots,
the conservative worst-case time complexity
is O(D * 2^N + N log N).

## Space Complexity

- Job Array: O(N)
- Schedule Arrays: O(D)
- Remaining Profit Array: O(N)
- Recursion Stack: O(N)
- Total Space: O(N + D)

The number of time slots is limited to N.

Therefore, total space complexity is O(N).

## Advantages

- Finds an optimal solution.
- Eliminates unpromising branches.
- Reduces unnecessary computations.
- Suitable for optimization problems.

## Disadvantages

- Worst-case execution time is exponential.
- Performance depends on the bounding function.
- May be inefficient for large job sets.

## Applications

- Task scheduling
- Manufacturing systems
- Resource allocation
- Project management
- Production planning
- Computer job scheduling
- Profit maximization

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ Job_Scheduling.cpp -o job_scheduling

## Execution

./job_scheduling

## Result

Job Scheduling was implemented using
the Branch and Bound Method in C++
to obtain an optimal job schedule
with maximum total profit.
