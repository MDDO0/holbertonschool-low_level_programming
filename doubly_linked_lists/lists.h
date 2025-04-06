#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: Node structure for a doubly linked list
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#endif /* LISTS_H */
