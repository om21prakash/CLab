#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <float.h>
int main()
{
  int a=4;
  int *p = (int*)malloc(sizeof(int));
  printf("%d\n", a);
  printf("%d\n", p);
}
