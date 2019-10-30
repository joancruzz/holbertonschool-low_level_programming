#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

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

/* Holberton Print Functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Helper Functions */
void swap(int *first, int *second);
void swap_nodes(listint_t *left, listint_t *right, listint_t **list);
int find_largest(int *array, size_t size);
int lomuto(int *array, size_t size, int low, int high);
void quickswap_l(int *array, size_t size, int low, int high);
void merge(int *array, int left, int middle, int right, int *container);
void mergesort(int *array, int left, int right, int *container);
void heapify(int *array, int n, int i, size_t size);
void radixsort(int *array, int size, int exp);
int hoare(int *array, size_t size, int low, int high);
void quickswap_h(int *array, size_t size, int low, int high);

/* Sorting Functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void sort_deck(deck_node_t **deck);

#endif /* SORT_H */
