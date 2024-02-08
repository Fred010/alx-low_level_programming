#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: reps an integer
 * @index: index of the node in the list
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list in the express
 * @n: reps an integer
 * @index: index of the node in the list
 * @next: points to the next node
 * @express: points to the next node in the express lane
 *
 */

typedef struct skiplist_s
{

	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */