#include "list.h"
#include <unistd.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *start = lst;
	t_list *temp;
	int list_length = 0;
	int i = 0;

	while (lst) {
		list_length++;
		lst = lst->next;
	}

	while (i < list_length - 1) {
		temp = start;
		while (temp->next) {
			if (!cmp(temp->data, temp->next->data)) {
				int temp_data = temp->data;
				temp->data = temp->next->data;
				temp->next->data = temp_data;
			}
			temp = temp->next;
		}
		i++;
	}

	return start;
}