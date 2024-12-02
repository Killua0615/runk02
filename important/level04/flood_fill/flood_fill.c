#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.t_point.h"

void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)//範囲外の座標,塗りつぶし対象でないセル,再帰の無限ループ防止
		return;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}//再帰的に周囲を見ていく、'1' がつながっている部分だけが塗りつぶされ

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);//最初のインデックス、列 が2番目のインデックス
}

char** make_area(char** zone, t_point size)
{
    char** new = malloc(sizeof(char*) * size.y);
    for (int i = 0; i < size.y; ++i)
    {
        new[i] = malloc(size.x + 1);// +1 は '\0' のため
        for (int j = 0; j < size.x; ++j)
            new[i][j] = zone[i][j];
        new[i][size.x] = '\0';// 行の終わりを NULL 終了文字で
    }
    return new;
}

// main関数
int main(void)
{
    // ゾーンのサイズと初期状態
    t_point size = {8, 5};
    char *zone[] = {
		  "11111111",
		  "10001001",
		  "10010001",
		  "10110101",
		  "11100001",
    };

    // ゾーンを新しいメモリにコピー
    char** area = make_area(zone, size);
    
    // 元のゾーンを表示
    printf("Original zone:\n");
    for (int i = 0; i < size.y; ++i)
        printf("%s\n", area[i]);
    printf("\n");

    // 開始点
    t_point begin = {7, 4};// インデックス配列

    // flood_fill を実行
    flood_fill(area, size, begin);

    // 'F' で埋めた後のゾーンを表示
    printf("After flood_fill:\n");
    for (int i = 0; i < size.y; ++i)
        printf("%s\n", area[i]);

    // メモリ解放
    for (int i = 0; i < size.y; ++i)
        free(area[i]);
    free(area);

    return 0;
}