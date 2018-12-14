#include <stdio.h>

int main () 
{
    float me, ma, nt, mp;
    scanf("%f%f%f", &me, &ma, &nt);
    
    mp = (5 * me + 3 * ma + 3 * nt) /10; 
    
    if ( mp > 10) {
        mp = 10;
       printf("%.1f\naprovado", mp);
    }
    else if (mp >= 7.0) {
        printf("%.1f\naprovado", mp);
    }
    else if (mp < 4.0) {
        printf("%.1f\nreprovado",mp);
    }
    else if (mp <= 6.9 || mp >= 4.0) {
        printf("%.1f\nfinal",mp);
    }
    
     return 0; 
}