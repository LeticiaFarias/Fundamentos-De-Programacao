#include <stdio.h>
int main()
{
    int a, b, c=0, i;
    scanf("%d", &a);
    
    b=a/2;
    for(i=2;i<b;i++)
    {
        if (a%i==0) c++;
    }
    
    if (c<1) printf("primo");
    else printf("nao primo");
    return 0;
}