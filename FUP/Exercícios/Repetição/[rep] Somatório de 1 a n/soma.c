#include <stdio.h>

int main ()
{
    int i,n, soma=0;
    scanf ("%d", &n);
    
    for (i=1;i<=n;i++)
    soma=soma+i;
    
    printf ("%d", soma);
    
   
    return 0;
}