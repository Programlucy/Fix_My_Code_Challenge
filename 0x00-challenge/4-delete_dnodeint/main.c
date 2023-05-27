#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	dlistint_t *head;

	head = NULL;

	/* Adding nodes to the end of the list */
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);

	/* Printing the list */
	print_dlistint(head);
	printf("-----------------\n");

	/* Deleting a node at index 5 */
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");

	/* Deleting the first node */
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	/* Deleting the first node again */
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	/* Deleting the first node multiple times */
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	/* Deleting the remaining nodes */
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	/* Freeing the list */
	free_dlistint(head);

	return (0);
}
