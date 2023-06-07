#include "lists.h"

/**
 * main - check the code for
 * Return: Always 0.
 */

int main(void)
{
	listint_t *heading;

	heading = NULL;
	add_nodeint_end(&heading, 0);
	add_nodeint_end(&heading, 1);
	add_nodeint_end(&heading, 2);
	add_nodeint_end(&heading, 3);
	add_nodeint_end(&heading, 4);
	add_nodeint_end(&heading, 98);
	add_nodeint_end(&heading, 402);
	add_nodeint_end(&heading, 1024);
	print_listint(heading);

	printf("-----------------\n");

	insert_node(&heading, -11);
	insert_node(&heading, 27);
	insert_node(&heading, 1341);

	print_listint(heading);

	free_listint(heading);

	return (0);
}
