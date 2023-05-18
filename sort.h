#ifndef _SORT_H_
#define _SORT_H_

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

/* -- Auxiliary functions -- */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* -- Mandatory functions -- */

/* Bubble sort */
void bubble_sort(int *array, size_t size);

/* Insertion sort */
void insertion_sort_list(listint_t **list);

/* Selection sort */
void selection_sort(int *array, size_t size);

/* Quick sort */
void quick_sort(int *array, size_t size);
int partition(int *array, size_t low, int high, size_t size);
void quickSortRecursive(int arr[], int low, int high, size_t size);
int is_sorted(int *array, size_t size_t);
void swap(int *a, int *b);


#endif