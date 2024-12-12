#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

// 比較関数
int cmp(void *data1, void *data2)
{
    return strcmp((char *)data1, (char *)data2);
}

// リストを表示する関数
void print_list(t_list *list)
{
    while (list)
    {
        printf("%s -> ", (char *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

// リストを解放する関数
void free_list(t_list *list)
{
    t_list *temp;
    while (list)
    {
        temp = list;
        list = list->next;
        free(temp);
    }
}

int main(void)
{
    // ノードを動的に作成
    t_list *node3 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node1 = malloc(sizeof(t_list));

    if (!node3 || !node2 || !node1)
        return (1); // メモリ確保失敗時は終了

    node3->data = "three";
    node3->next = NULL;

    node2->data = "two";
    node2->next = node3;

    node1->data = "one";
    node1->next = node2;

    t_list *list = node1;

    printf("Before removal:\n");
    print_list(list);

    ft_list_remove_if(&list, "two", cmp);

    printf("After removal:\n");
    print_list(list);

    // リストを解放
    free_list(list);

    return 0;
}
