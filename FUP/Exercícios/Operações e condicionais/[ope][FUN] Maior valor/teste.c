#include <stdio.h>

int main ()
{
    int a1, a2, a3, a4, maior;
    
    scanf ("%d%d%d%d", &a1, &a2, &a3, &a4);
    maior = a1;
    
    if (a2 > maior)
    maior = a2;
    
    if (a3 > maior)
    maior = a3;
    
    if (a4 > maior)
    maior = a4;
    
    printf ("%d", maior);
    
}