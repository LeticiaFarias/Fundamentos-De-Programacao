#include <stdio.h>

int main ()
{
    int n, d, h, m, s;
    
    scanf ("%d", &n);
    
    d=n/86400;
    n=n%86400;
    h=n/3600;
    n=n%3600;
    m=n/60;
    s=n%60;
    
    
    printf ("%dd %02dh %02dm %02ds", d, h, m, s);
    
}