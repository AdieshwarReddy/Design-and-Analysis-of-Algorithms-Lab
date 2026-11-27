# Experiment 2: Merge Sort Output

## Test Case 1: Unsorted Array

### Input

Number of Elements: 8

Array Elements:

    38 27 43 3 9 82 10 15

### Expected Output

    Original Array: 38 27 43 3 9 82 10 15
    Sorted Array: 3 9 10 15 27 38 43 82

## Test Case 2: Reverse Sorted Array

### Input

Number of Elements: 5

Array Elements:

    50 40 30 20 10

### Expected Output

    Original Array: 50 40 30 20 10
    Sorted Array: 10 20 30 40 50

## Test Case 3: Already Sorted Array

### Input

Number of Elements: 5

Array Elements:

    10 20 30 40 50

### Expected Output

    Original Array: 10 20 30 40 50
    Sorted Array: 10 20 30 40 50

## Test Case 4: Duplicate Elements

### Input

Number of Elements: 6

Array Elements:

    5 2 8 2 5 1

### Expected Output

    Original Array: 5 2 8 2 5 1
    Sorted Array: 1 2 2 5 5 8

## Test Case 5: Negative Elements

### Input

Number of Elements: 6

Array Elements:

    -5 10 -2 0 8 -9

### Expected Output

    Original Array: -5 10 -2 0 8 -9
    Sorted Array: -9 -5 -2 0 8 10

## Test Case 6: Single Element

### Input

Number of Elements: 1

Array Elements:

    25

### Expected Output

    Original Array: 25
    Sorted Array: 25

## Step-by-Step Execution

Original Array:

    [38, 27, 43, 3, 9, 82, 10, 15]

First Division:

    [38, 27, 43, 3]
    [9, 82, 10, 15]

Second Division:

    [38, 27]
    [43, 3]
    [9, 82]
    [10, 15]

Third Division:

    [38] [27] [43] [3]
    [9] [82] [10] [15]

First Merging:

    [27, 38]
    [3, 43]
    [9, 82]
    [10, 15]

Second Merging:

    [3, 27, 38, 43]
    [9, 10, 15, 82]

Final Merging:

    [3, 9, 10, 15, 27, 38, 43, 82]

## Complexity Analysis

| Case | Time Complexity |
|------|-----------------|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

Auxiliary Space Complexity: O(n)

Recursion Stack Space: O(log n)

## Observations

- Merge Sort follows the Divide and Conquer approach.
- The array is recursively divided into smaller parts.
- Sorted subarrays are merged to obtain the final result.
- Merge Sort handles duplicate and negative elements.
- Merge Sort maintains O(n log n) time complexity
  in all three cases for this implementation.
- Additional memory is required during merging.
- Merge Sort is a stable sorting algorithm.

## Result

Merge Sort was implemented using C++.
The algorithm sorts the given array
in ascending order.
