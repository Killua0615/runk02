#include "flood_fill.h"

void  fill(char **tab, t_point size, int x, int y, char target)
{
  if(x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != target)
    return;
  fill(tab, size, x + 1, y, target);
  fill(tab, size, x - 1, y, target);
  fill(tab, size, x, y + 1, target);
  fill(tab, size, x, y - 1, target);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
  char target = tab[begin.x][begin.y];
  if(target != 'F')
    fill(tab, size, begin.x, begin.y, target);
}