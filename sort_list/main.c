#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// t_list ノードを作成
t_list *create_node(int data)
{
	t_list *new_node = (t_list *)malloc(sizeof(t_list));
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

// リストを表示
void print_list(t_list *lst)
{
	while (lst) {
		printf("%d ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

// 比較関数（昇順ソート）
int ascending(int a, int b)
{
	return (a <= b);
}

int main(void)
{
	// ノードの作成
	t_list *n1 = create_node(5);
	t_list *n2 = create_node(3);
	t_list *n3 = create_node(8);
	t_list *n4 = create_node(1);
	t_list *n5 = create_node(6);

	// リストの構築
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;

	// ソート前のリストを表示
	printf("Original list:\n");
	print_list(n1);

	// リストをソート
	n1 = sort_list(n1, ascending);

	// ソート後のリストを表示
	printf("Sorted list:\n");
	print_list(n1);

	return 0;
}
