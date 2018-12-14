#include <stdio.h>
int main ()
{
    int n, l1, l2, i, qtde,soma=0;
    scanf ("%d %d %d", &qtde, &l1, &l2);
    for (i=1; i<= qtde; i++){
        scanf ("%d", &n);
        
        if (n>=l1 && n<=l2) {soma++;}
        }
    printf ("%d",soma);
}
