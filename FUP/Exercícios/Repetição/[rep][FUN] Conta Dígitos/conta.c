#include <stdio.h>
int main ()
{
    int a=0, b=0, i=1, c=0;
    scanf("%d%d",&a,&b);
    
    while (b!=0)
    {
        i=b%10;
        b=b/10;
        if (i==a) c++;
    }
    
    printf("%d",c);
    
    return 0;
}
