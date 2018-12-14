#include <stdio.h>
int main()
{
    int a, i, c, d=0;
    float b;
    scanf("%d", &a);
    c=a;
    for (i=0;i<a;i++)
    {
        scanf("%f", &b);
        if (b < 5.0) {
            c--; 
            d++;
            
        }
    }
    
    printf("%d %d", c, d);
    
    return 0;
}

