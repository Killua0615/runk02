#include <stdio.h>
#include "ft_list.h"

// データを出力する関数
void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

int main(void)
{
    // ノードを作成
    t_list node3 = { NULL, "Node 3" };
    t_list node2 = { &node3, "Node 2" };
    t_list node1 = { &node2, "Node 1" };

    // 各ノードのデータを表示
    ft_list_foreach(&node1, print_data);

    return 0;
}
