# 0x1B. C - Sorting algorithms & Big O

Sorting algorithms like the name says by itself are algorithms that sort an array in a particular order (e.g. [c, d, a, b] to [a, b, c, d] or [2, 4, 6, 8] to [8, 6, 4, 2]. There are twwo broad types of sorting algorithms:
- Comparison sorts: This compares elements at each step of an algorithm and will determine what element should be to the left or right of another element.
- Integer sorts: Also called counting sorts. They don't make comparisons, they determine for an element `x` how many elements are less than `x`.

The goal of sorting algorithms will always be the output of a sorted list. There are different ways in how this is measured. Time and space complexity. The running time of algorithms are measured in terms of Big O. Big O is a symbolic notation that tells us how the algorithm will perform when the data increases. There are different ways to classify the Big O notations:
- O(1)
- O(n)
- O(n!)
- O(n^2)
- O(log(n))
- O(nlog(n))
- O(2^n)

## Learning Objectives


- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Tasks

_**0. Bubble sort**_
Write a function that sorts an array of integers in ascending order using the **Bubble sort** algorithm

- Prototype: `void bubble_sort(int *array, size_t size);`
- Youre expected to print the `array` after each time you swap two elements (See example below)

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

_**1. Insertion sort**_
Write a function that sorts a doubly linked list of integers in ascending order using the **Insertion sort** algorithm

- Prototype: `void insertion_sort_list(listint_t **list);`
- You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
- Youre expected to print the `list` after each time you swap two elements (See example below)

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

_**2. Selection sort**_
Write a function that sorts an array of integers in ascending order using the **Selection sort** algorithm

- Prototype: `void selection_sort(int *array, size_t size);`
- Youre expected to print the `array` after each time you swap two elements (See example below)

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

_**3. Quick sort**_
Write a function that sorts an array of integers in ascending order using the **Quick sort** algorithm

- Prototype: `void quick_sort(int *array, size_t size);`
- You must implement the `Lomuto` partition scheme.
- The pivot should always be the last element of the partition being sorted.
- Youre expected to print the `array` after each time you swap two elements (See example below)

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

### Authors

- **Kevin Castro** - castrok.c11@hotmail.com
- **Luis Herrera** - 1209@holbertonschool.com