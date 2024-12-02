int max(int *tab, unsigned int len)
{
  int largest;
  unsigned int i = 1;

  if (len == 0)
    return 0;
  largest = tab[i];
  while (i < len)
  {
    if (tab[i] > largest)
      largest = tab[i];
    i++;
  }
  return largest;
}

#include <stdio.h>
int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {-10, -20, -30, -5};
    int arr3[] = {};

    printf("Max of arr1: %d\n", max(arr1, 5)); // 5
    printf("Max of arr2: %d\n", max(arr2, 4)); // -5
    printf("Max of arr3: %d\n", max(arr3, 0)); // 0

    return 0;
}
