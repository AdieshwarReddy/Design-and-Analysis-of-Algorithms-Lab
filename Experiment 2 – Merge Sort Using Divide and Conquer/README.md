# Experiment 2: Merge Sort Using Divide and Conquer

## Aim

To implement the Merge Sort algorithm using
the Divide and Conquer technique in C++.

## Theory

Merge Sort is a comparison-based sorting
algorithm that uses the Divide and Conquer
approach to sort elements efficiently.

The array is recursively divided into smaller
subarrays until each subarray contains a
single element.

The sorted subarrays are then merged to
produce a completely sorted array.

## Divide and Conquer Technique

### 1. Divide

Divide the array into two halves.

### 2. Conquer

Recursively sort the left and right halves.

### 3. Combine

Merge the sorted halves into a single
sorted array.

## Algorithm

1. Start the program.
2. Read the number of elements.
3. Read the array elements.
4. Find the middle index of the array.
5. Divide the array into two halves.
6. Recursively sort the left half.
7. Recursively sort the right half.
8. Merge both sorted halves.
9. Display the sorted array.
10. Stop the program.

## Recurrence Relation

T(n) = 2T(n/2) + O(n)

## Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

## Space Complexity

O(n) auxiliary space.

## Advantages

- Efficient for large datasets.
- Stable sorting algorithm.
- Guaranteed O(n log n) time complexity.
- Suitable for external sorting.
- Performance is consistent across input orders.

## Disadvantages

- Requires additional memory.
- Recursive calls introduce overhead.
- Standard array-based implementation is
  not an in-place sorting algorithm.

## Applications

- External sorting
- Sorting linked lists
- Large dataset processing
- Inversion counting
- Database sorting operations

## Software Requirements

- C++ Compiler
- GitHub Codespaces or Linux Terminal

## Compilation

g++ Merge_Sort.cpp -o merge_sort

## Execution

./merge_sort

## Result

The Merge Sort algorithm was implemented
using the Divide and Conquer technique
in C++.
