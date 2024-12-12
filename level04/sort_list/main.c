#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int));

// 昇順にソートするための比較関数
int ascending(int a, int b)
{
	return (a <= b);
}

// リストを表示する関数
void print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", lst->data);
		lst = lst->next;
	}
	printf("NULL\n");
}

// リストを解放する関数
void free_list(t_list *lst)
{
	t_list *temp;
	while (lst)
	{
		temp = lst;
		lst = lst->next;
		free(temp);
	}
}

// 新しいノードを作成
t_list *create_node(int data)
{
	t_list *new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

int main(void)
{
	t_list *lst = create_node(42);
	lst->next = create_node(15);
	lst->next->next = create_node(23);
	lst->next->next->next = create_node(4);

	printf("Before sorting:\n");
	print_list(lst);

	lst = sort_list(lst, ascending);

	printf("After sorting:\n");
	print_list(lst);

	free_list(lst);
	return (0);
}
