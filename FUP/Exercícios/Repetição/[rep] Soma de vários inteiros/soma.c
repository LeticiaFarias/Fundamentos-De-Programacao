#include <stdio.h>

int main ()
{
    int a, soma=0;
    
    scanf ("%d", &a);
    
    while (a!=0) {
        soma=a+soma;
        scanf ("%d", &a);
    }
    
    printf ("%d", soma);
}