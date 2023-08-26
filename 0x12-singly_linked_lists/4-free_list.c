#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list and its associated memory
 * @head: Pointer to the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;

		free(currentNode->str);
		free(currentNode);
	}
}
