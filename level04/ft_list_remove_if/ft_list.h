#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list
{
    struct s_list *next; // 次のノードへのポインタ
    void          *data; // ノードが保持するデータ
} t_list;

// ft_list_remove_if 関数のプロトタイプ
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *));

#endif
