#include <stdio.h>

int main ()
{
  int a, b, i, soma=0;
  scanf ("%d %d", &a, &b);
  
  for (i=a;i<=b;i++)
  soma=soma+i;
  
  printf ("%d", soma);
}