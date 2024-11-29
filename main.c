#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *create_elem(void *data)
{
	t_list *new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}

int main(void)
{
	t_list *list = NULL;

	printf("Empty list size: %d\n", ft_list_size(list));

	list = create_elem("First element");
	printf("Single element list size: %d\n", ft_list_size(list));

	list->next = create_elem("Second element");
	list->next->next = create_elem("Third element");
	printf("Multiple element list size: %d\n", ft_list_size(list));

	t_list *tmp;
	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}

	return 0;
}
