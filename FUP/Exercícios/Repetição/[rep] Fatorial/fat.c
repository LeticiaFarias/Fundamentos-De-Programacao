#include <stdio.h>

int main ()
{
    unsigned long long int i, n, fat=1;
    
    scanf ("%llu", &n); 
    
    i = n;
    
    for (i = n; i >= 1; i --){
        fat = fat * i;
    }
    
    printf ("%llu", fat);
    
    
    return 0;
    
}