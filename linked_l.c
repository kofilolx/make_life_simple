#include <stdio.h>
#include <stdlib.h>
#include "linked_l.h"


/**
 * main - main function driver
 *
 * return: always 0 success
 */

int main()
{
	struct node *head, *new_node *temp;

	head = NULL;

	new_node = (struct node *) malloc(sizeof(struct node)); //Type casting 
	printf("Enter data: "); // prompt
	scanf("%d", &new_node->data); //#accessing node data

	new_node->next = 0;
	if (head == NULL)
	{
		head = temp;
		temp = new_node;

	else
		temp->next = new_node;

	return (0);

}
