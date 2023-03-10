#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(int *xp, int *yp);
void insertion_sort_list(listint_t **list);
void swapList(listint_t *current, listint_t *tmp);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swaper(int *array, size_t size, int *first, int *second);
int partition(int *array, size_t size, ssize_t low, ssize_t high);
void sort_quick(int *array, size_t size, ssize_t low, ssize_t high);


#endif
