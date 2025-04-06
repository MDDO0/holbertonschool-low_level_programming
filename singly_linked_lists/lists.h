#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  // لـ size_t
#include <stdlib.h>  // لـ malloc و NULL

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t list_len(const list_t *h);

#endif
