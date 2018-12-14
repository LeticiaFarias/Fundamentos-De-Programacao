
#include <stdio.h>
int main()
{
    int a, b, c, d=0, e=0, f=0, i;
    scanf("%d", &a);
    
    for (i=0;i<a;i++)
    {
        scanf("%d %d", &b, &c);
        if ((b+c)%2==0) d++;
        else e++;
    }
    
    if (d>e) printf("jogador 1");
    else if (d<e) printf("jogador 2");
    else printf("empate");
    
    return 0;
}
