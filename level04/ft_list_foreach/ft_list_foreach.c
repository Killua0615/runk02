#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
  while (begin_list) // リストの最後までループ
  {
    (*f)(begin_list->data); // 各要素のデータに関数を適用
    begin_list = begin_list->next; // 次のノードに進む
  }
}