# Practiced DSA & C Programming Questions

This file contains the list of topics and problems already practiced, categorized for quick reference.

## 1. Basics and Operators
* [eg1.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg1.c) - Simple input reading with buffer clearing using `__fpurge(stdin)`.
* [eg2.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg2.c) - Sums two inputs and checks if the sum is greater than, equal to, or less than 50. Manually clears input buffer using a `getchar` loop.
* [eg3.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg3.c) - Demonstrates arithmetic, relational, and logical operators with formatted output.
* [eg4.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg4.c) - Basic flow control constructs including `for`, `while`, `do-while`, and `switch-case`.

## 2. Numbers & Mathematical Logic
* [eg5.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg5.c) - Generates a series where the increment increases by 1 each step (e.g., 1, 2, 4, 7, 11...).
* [eg6.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg6.c) - Prints the factorial series up to a given number of steps.
* [eg7.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg7.c) - Generates the Fibonacci sequence iteratively.
* [eg8.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg8.c) - Prints a series with alternating sign additions and subtractions based on index parity.
* [eg9.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg9.c) - Finds prime numbers in a range, optimized by dividing the current number by 2.
* [eg10.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg10.c) - Counts digits in a positive or negative integer.
* [eg11.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg11.c) - Traverses an integer right-to-left and prints its reversed value.
* [eg12.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg12.c) - Traverses and prints digits from left-to-right using powers of 10.
* [eg13.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg13.c) - Computes base raised to an exponent ($base^{exp}$) iteratively.
* [eg14.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg14.c) - Finds Armstrong numbers within a specified range.
* [eg33.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg33.c) - Digit extraction from a number using two different mathematical methods.
* [eg36.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg36.c) - Factorial calculation using recursion.

## 3. Array Operations & Two-Pointer Logic
* [eg15.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg15.c) - Prints nested index comparisons representing selection sort index pairs.
* [eg16.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg16.c) - Prints adjacent comparison index pairs representing bubble sort index pairs.
* [eg17.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg17.c) - Standard nested loops demonstrating a 2D grid of coordinate pairs.
* [eg18.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg18.c) - Simultaneous forward-backward array traversal comparison using two pointers.
* [eg19.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg19.c) - Prints a right-angled triangle number pattern.
* [eg20.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg20.c) - Prints a centered star pyramid pattern.
* [eg21.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg21.c) - Dynamic array allocation, input filling, printing, and memory deallocation using `malloc` and `free`.
* [eg22.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg22.c) - Finds the largest element in an array.
* [eg23.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg23.c) - Finds the largest, smallest, and second largest elements in an array.
* [eg24.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg24.c) - Reverses an array in-place using two-pointer swapping.
* [eg25.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg25.c) - Finds the largest even number in an array.
* [eg26.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg26.c) - Swaps two variables with a temporary variable, and without one using arithmetic.
* [eg27.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg27.c) - Standard linear search ($O(N)$) to locate a number in an array.
* [eg28.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg28.c), [eg28_1.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg28_1.c), [eg28_2.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg28_2.c) - Counting occurrences of elements in an array, showing naive vs duplicate-optimized loops.
* [eg34.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg34.c) - Partitioning step of Quick Sort around a pivot (using first element as pivot).
* [eg35.cpp](file:///media/ashvin/code/test/practice/c_programming/revision/eg35.cpp) - Merges two sorted arrays into a third sorted array.

## 4. Sorting Algorithms
These implementations are located in the [sorting](file:///media/ashvin/code/test/practice/c_programming/revision/sorting) directory:
* [linear_sort.c](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/linear_sort.c) - Simple linear sorting comparing each element to the rest of the array.
* [bubble_sort.c](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/bubble_sort.c) - Classic bubble sort swapping adjacent elements.
* [selection_sort.c](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/selection_sort.c) - Sorts by locating the minimum element and placing it in position.
* [insertion_sort.c](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/insertion_sort.c) - Inserts elements into their correct position in a sorted subarray.
* [shell_sort.c](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/shell_sort.c) - Shell sort using decreasing gaps (optimized insertion sort).
* [max_heap_sort.c](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/max_heap_sort.c) - Sorts by building a Max-Heap and repeatedly extracting the root.
* [radix_sort.cpp](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/radix_sort.cpp) - Radix sort for non-negative integers using base-10 digit sorting.
* [quick_sort_recursive.c](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/quick_sort_recursive.c) / [quick_sort.cpp](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/quick_sort.cpp) - Recursive quick sort partitioning around a pivot.
* [merge_sort_recursive.c](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/merge_sort_recursive.c) / [merge_sort.cpp](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/merge_sort.cpp) - Recursive divide-and-conquer merge sort.
* [counting_sort.c](file:///media/ashvin/code/test/practice/c_programming/revision/sorting/counting_sort.c) - Non-comparison based integer sort using a frequency counter.

## 5. Data Structures
* [eg29.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg29.c) - Constructing a Min-Heap in-place inside an array.
* [eg30.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg30.c) - Constructing a Max-Heap in-place inside an array.
* [eg31.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg31.c) - Menu-driven Stack structure (Push, Pop, Peek) using a static array.
* [eg32.c](file:///media/ashvin/code/test/practice/c_programming/revision/eg32.c) - Menu-driven Linear Queue structure (Enqueue, Dequeue, Peek) using a static array. Includes two dequeue methods (shifting front pointer vs shifting elements).
