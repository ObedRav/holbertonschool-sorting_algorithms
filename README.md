# C - Sorting algorithms & Big O

In this project, I implemented several different sorting algorithms.

<p align="center">
 <img src= "https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/248/willy-wonka.png">
 
 ## Helper Files :raised_hands:

- [print_array.c](./print_array.c): C function that prints an array of integers.
- [print_list.c](./print_list.c): C function that prints a `listint_t` doubly-linked list.

## Tasks :page_with_curl:

- **0. Bubble sort**

  - [0-bubble_sort.c](./0-bubble_sort.c): C function that sorts an array of integers in ascending order using the [Bubble Sort algorithm](https://en.wikipedia.org/wiki/Bubble_sort).
  - Prints the array after each swap.
  - [0-O](./0-O): Text file containing the best, average, and worst case time complexities of the Bubble Sort algorithm, one per line.
  
 <p align="center">
 <img src= "https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif">
  
- **1. Insertion sort**

  - [1-insertion_sort_list.c](./1-insertion_sort_list.c): C function that sorts a `listint_t` doubly-linked list of integers in ascending order using the
    [Insertion Sort algorithm](https://en.wikipedia.org/wiki/Insertion_sort).
  - Prints the list after each swap.
  - [1-O](./1-O): Text file containing the best, average, and worst case time complexities of the Insertion Sort algorithm, one per line.

<p align="center">
<img src= "https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif">

- **2. Selection sort**

  - [2-selection_sort.c](./2-selection_sort.c): C function that sorts an array of integers in ascending order using the [Selection Sort algorithm](https://en.wikipedia.org/wiki/Selection_sort).
  - Prints the array after each swap.
  - [2-O](./2-O): Text file containing the best, average, and worst case time complexities of the Selection Sort algorithm, one per line.
  
<p align="center">
<img src= "https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif">

- **3. Quick sort**

  - [3-quick_sort.c](./3-quick_sort.c): C function that sorts an array of integers in ascending order using the [Quick Sort algorithm](https://en.wikipedia.org/wiki/Quicksort).
  - Implements the Lomuto partition scheme.
  - Always uses the last element of the partition being sorted as the pivot.
  - Prints the array after each swap.
  - [3-O](./3-O): Text file containing the best, average, and worst case time complexities of the Quick Sort Lomuto Partition scheme algorithm, one per line.
  
<p align="center">
<img src= "https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif">

- **4. Dealer**
  - [1000-sort_deck.c](./1000-sort_deck.c): C function that sorts a `deck_node_t` doubly-linked list deck of cards.
  - Assumes that there are exactly `52` elements in the doubly-linked list.
  - Orders the deck from spades to diamonds and from aces to kings.
```
{Jack, C}, {4, H}, {3, H}, {3, D}, {Queen, H}, {5, H}, {5, S}, {10, H}, {6, H}, {5, D}, {6, S}, {9, H}, {7, D}
{Jack, S}, {Ace, D}, {9, C}, {Jack, D}, {7, S}, {King, D}, {10, C}, {King, S}, {8, C}, {9, S}, {6, C}, {Ace, C}, {3, S}
{8, S}, {9, D}, {2, H}, {4, D}, {6, D}, {3, C}, {Queen, C}, {10, S}, {8, D}, {8, H}, {Ace, S}, {Jack, H}, {2, C}
{4, S}, {2, S}, {2, D}, {King, C}, {Queen, S}, {Queen, D}, {7, C}, {7, H}, {5, C}, {10, D}, {4, C}, {King, H}, {Ace, H}


{Ace, S}, {2, S}, {3, S}, {4, S}, {5, S}, {6, S}, {7, S}, {8, S}, {9, S}, {10, S}, {Jack, S}, {Queen, S}, {King, S}
{Ace, H}, {2, H}, {3, H}, {4, H}, {5, H}, {6, H}, {7, H}, {8, H}, {9, H}, {10, H}, {Jack, H}, {Queen, H}, {King, H}
{Ace, C}, {2, C}, {3, C}, {4, C}, {5, C}, {6, C}, {7, C}, {8, C}, {9, C}, {10, C}, {Jack, C}, {Queen, C}, {King, C}
{Ace, D}, {2, D}, {3, D}, {4, D}, {5, D}, {6, D}, {7, D}, {8, D}, {9, D}, {10, D}, {Jack, D}, {Queen, D}, {King, D}
```

