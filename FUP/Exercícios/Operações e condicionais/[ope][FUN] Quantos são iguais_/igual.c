#include <stdio.h>

int main ()
{
    int a, b, c;
    
    scanf ("%d %d %d", &a, &b, &c);
    
    if (a == b && a != c || c == b && a != b || a == c && c != b ){
        printf ("2");
    }
    
    else if (a == b && a == c && b == c){
        printf ("3");
    }
    
    else 
    printf ("0");
    
    
    
    
}