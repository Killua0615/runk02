#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
  
}

//再帰をしている。
//（begin_list->next）に対して自分自身を呼び出し、その結果に 1 を加えることで要素数を計算している

// ft_list_size(Node3) => 1 + 0 = 1
// ft_list_size(Node2) => 1 + 1 = 2
// ft_list_size(Node1) => 1 + 2 = 3
