#include <stdio.h>

int main ()
{
    int a, b, soma=0;
    scanf ("%d %d", &a, &b);
    
    while (a<=b){
    if (b%2==0)
    soma=soma+b;
    b--;
}
    printf ("%d", soma);
    
}