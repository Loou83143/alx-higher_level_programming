#include "lists.h"

/**
 * check_cycle - Check for the loop in LL
 * @list: Head of linked list
 *
 * Description - Check for the loops in LL
 * Return: if cycled 1, if not 0
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
		return (0);
	}
	slow = list;
	fast = list->next;
	while (fast && slow && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
