#include "flood_fill.h"

void fill(char **tab, t_point size, int x, int y, char target)
{
  if (x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != target)
    return;
  tab[y][x] = 'F';

  fill(tab, size, x + 1, y, target); // 右
  fill(tab, size, x - 1, y, target); // 左
  fill(tab, size, x, y + 1, target); // 下
  fill(tab, size, x, y - 1, target); // 上
}

void flood_fill(char **tab, t_point size, t_point begin)
{
  char target = tab[begin.y][begin.x];//2次元配列は行（row）と列（column）の順番。このためy が行、x が列を表します。tab[y][x] の形でアクセスするのが標準的
  if (target != 'F') // 既に 'F' の場合は何もしない
    fill(tab, size, begin.x, begin.y, target);
}

// if (x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != target)
//   return;
// x < 0: 横方向の座標 x が負数（配列の左端を超えた）場合
// x >= size.x: 横方向の座標 x が配列の右端を超えた場合
// y < 0: 縦方向の座標 y が負数（配列の上端を超えた）場合
// y >= size.y: 縦方向の座標 y が配列の下端を超えた場合


//tab[y][x] != target は、現在の座標 (y, x) の値が、塗りつぶし対象の値（target）と一致していない場合を判定する