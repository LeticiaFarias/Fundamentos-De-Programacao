#include <stdio.h>

int main ()
{
    int a, b, soma, sub, mul, mod;
    float div;
    
    scanf ("%d %d", &a, &b);
    soma = a + b;
    sub = a - b;
    mul = a * b;
    
    printf ("%d %d %d", soma, sub, mul);
    
    if (b == 0) {
        printf ("\nimpossivel dividir por zero");
    }
    
    else {
        div = a/(float)b;
        mod = a%b;
        
        printf (" %0.2f %d", div, mod);
    }
    
    
   
    return 0;
}