#include <stdio.h>
int main()
{
    char a[3][3]; int l=0, c=0, b=0;
    
    while(l<3)
    {
        while(c<3)
        {
            scanf("%c\n", &a[l][c]);
            c++;
        }
        c=0;
        l++;
    }
    
         if( (a[0][0] == a[0][1]) && (a[0][1] == a[0][2]) && (a[0][2] == 'X') ) { printf("X"); }
    else if( (a[0][0] == a[1][0]) && (a[1][0] == a[2][0]) && (a[2][0] == 'X') ) { printf("X"); }
    else if( (a[0][0] == a[1][1]) && (a[1][1] == a[2][2]) && (a[2][2] == 'X') ) { printf("X"); }    
    else if( (a[2][0] == a[1][1]) && (a[1][1] == a[0][2]) && (a[0][2] == 'X') ) { printf("X"); }
    else if( (a[2][2] == a[1][2]) && (a[1][2] == a[0][2]) && (a[0][2] == 'X') ) { printf("X"); }
    else if( (a[2][2] == a[2][1]) && (a[2][1] == a[2][0]) && (a[2][0] == 'X') ) { printf("X"); }
    else if( (a[0][1] == a[1][1]) && (a[1][1] == a[2][1]) && (a[2][1] == 'X') ) { printf("X"); }
    else if( (a[1][0] == a[1][1]) && (a[1][1] == a[1][2]) && (a[1][2] == 'X') ) { printf("X"); }
    else if( (a[0][0] == a[0][1]) && (a[0][1] == a[0][2]) && (a[0][2] == 'O') ) { printf("O"); }
    else if( (a[0][0] == a[1][0]) && (a[1][0] == a[2][0]) && (a[2][0] == 'O') ) { printf("O"); }
    else if( (a[0][0] == a[1][1]) && (a[1][1] == a[2][2]) && (a[2][2] == 'O') ) { printf("O"); }    
    else if( (a[2][0] == a[1][1]) && (a[1][1] == a[0][2]) && (a[0][2] == 'O') ) { printf("O"); }
    else if( (a[2][2] == a[1][2]) && (a[1][2] == a[0][2]) && (a[0][2] == 'O') ) { printf("O"); }
    else if( (a[2][2] == a[2][1]) && (a[2][1] == a[2][0]) && (a[2][0] == 'O') ) { printf("O"); }
    else if( (a[0][1] == a[1][1]) && (a[1][1] == a[2][1]) && (a[2][1] == 'O') ) { printf("O"); }
    else if( (a[1][0] == a[1][1]) && (a[1][1] == a[1][2]) && (a[1][2] == 'O') ) { printf("O"); }

    else printf("deu velha");
    
    return 0;
} 