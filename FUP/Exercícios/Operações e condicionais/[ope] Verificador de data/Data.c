#include <stdio.h>
int main()
{
    int d, m, a;
    scanf("%d %d %d", &d, &m, &a);
    
    if ((d<=0) || (m<=0)) printf("invalida");
    
    else if ((d>29&&m==2) || ((d>30)&&(m==4 || m==6 || m==9 || m==11)) || (d>31 || d<1 || m>12 || m<1)) printf("invalida");
    
    else if (d==29 && m==2) 
    {
        if ( ( (a%400==0) && (a%100==0) ) || ( (a%4==0) && (a%100!=0) ) ) printf("valida");
        else printf("invalida");
        
    }
    
    else printf("valida");
    
    return 0;
}
