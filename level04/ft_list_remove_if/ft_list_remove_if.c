#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *))
{
    if (begin_list == NULL || *begin_list == NULL)
        return;

    t_list *cur = *begin_list;//現在のノードの取得

    if (cmp(cur->data, data_ref) == 0) //現在のノードが削除対象かを確認
    { //以下の3行でノードを消去
        *begin_list = cur->next; //ノードをリストから切り離
        free(cur);               //現在のノード（cur）をメモリから解放
        ft_list_remove_if(begin_list, data_ref, cmp);//再帰呼び出しを行い、リストの残り部分を処理
    }
    else //ノードが削除対象でない場合
    {
        cur = *begin_list;//現在のノードはそのままにしておく
        ft_list_remove_if(&cur->next, data_ref, cmp);//再帰呼び出しを行い、次のノード（cur->next）を処理
    }
}
